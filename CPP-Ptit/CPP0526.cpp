#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'

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
struct tt{
	string name;
	int d, m ,y;
};
int so(string &s) {
	int f;
	stringstream ss(s);
	ss >> f;
	return f;
}
int main(){
//	ios_base :: sync_with_stdio (0);
//	cin.tie(0);
//	cout.tie(0);
	int n;
	cin >> n;
	tt a[n + 5];
	string s1;
	for (int i = 0; i < n; i ++) {
		cin >> a[i].name;
		scanf("%d/%d/%d", &a[i].d, &a[i].m, &a[i].y);
		//cout << a[i].d << " " << a[i].m << " " << a[i].y << endl;
	}
	sort(a, a + n, [] (tt b, tt c) {
		if (b.y != c.y) return b.y < c.y;
		else if (b.m != c.m) return b.m < c.m;
		else return b.d < c.d;
	});
	cout << a[n -1].name << endl << a[0].name;
	return 0;
}
//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
