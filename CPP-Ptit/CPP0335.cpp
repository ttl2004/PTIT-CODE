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
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		ll sum = 0, len = s.size(), _max = 0;
		for (ll i = 0; i < len ; i++) {
			if(s[i] >= '0' && s[i] <= '9') {
				sum = sum*10 + (s[i] - '0');
			}
			else {
				_max = max(_max, sum);
				sum = 0;
			}
			if (i == len - 1 && s[i] >='0' && s[i] <= '9') _max = max(_max, sum);
		}
		cout << _max << endl;
	}	
	return 0;
}
