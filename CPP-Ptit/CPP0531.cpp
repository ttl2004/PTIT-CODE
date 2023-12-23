#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
#define fi first
#define se second
using namespace std;
/*
                       _oo0oo_
                      o8888888o
                      88" . "88
                      (| -_- |)
                      0\  =  /0
                    ___/`---'\___
                  .' \\|     |// '.
                 / \\|||  :  |||// \
                / _||||| -:- |||||- \
               |   | \\\  -  /// |   |
               | \_|  ''\---/''  |_/ |
               \  .-\__  '-'  ___/-. /
             ___'. .'  /--.--\  `. .'___
          ."" '<  `.___\_<|>_/___.' >' "".
         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
         \  \ `_.   \_ __\ /__ _/   .-` /  /
     =====`-.____`.___ \_____/___.-`___.-'=====
                       `=---='
*/
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin>>t;
	while(t--){
		ll x1, y1, z1; // diem 1
		cin>>x1>>y1>>z1;
		ll x2, y2, z2; // diem 2
		cin>>x2>>y2>>z2;
		ll x3, y3, z3; // diem 3
		cin>>x3>>y3>>z3;
		ll x4, y4, z4; // diem 4
		cin>>x4>>y4>>z4;
		// vecto ab
		ll xab=x2-x1, yab=y2-y1, zab=z2-z1;
		// vecto ac
		ll xac=x3-x1, yac=y3-y1, zac=z3-z1;
		// vecto ad
		ll xad= x4-x1, yad= y4 - y1, zad = z4 - z1;
		//tich co huong cua hai veco ab  và ac
		ll xm=yab*zac-zab*yac;
		ll ym=zab*xac-xab*zac;
		ll zm=xab*yac-yab*xac;
		// tich vo huong voi vecto ad
		ll check = xm * xad + ym * yad + zm * zad;
		if(check==0) cout<<"YES\n";
		else cout<<"NO\n";
	}

	return 0;
}
