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
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
      cin>>n;
      vector<ll> a(n);
      for(int i=0; i<n; i++) cin>>a[i];
      ll cnt=0;
      int l=0, r=n-1, s1=0, s2=0;
      while(l<r){
            if(a[l]==a[r]){
                  l++;
                  r--;
            }
            else{
                 if(a[l]>a[r]){
                 	cnt++;
                 	ll j=a[r]+a[r-1];
                 	r--;
                 	a[r]=j;
				 }
				 else{
				 	cnt++;
				 	ll i=a[l]+a[l+1];
				 	l++;
				 	a[l]=i;
				}
            }
      }
      cout<<cnt<<endl;
	}
	return 0;
}

