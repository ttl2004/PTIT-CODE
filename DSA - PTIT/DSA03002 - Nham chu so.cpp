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
void doi(string &s, char c, char d) {
	int len = s.size();
	for (int  i = 0; i < len ; i++) {
		if (s[i] == c) {
			s[i] = d;
		}
	}
}
ll nguyen(string s) {
	stringstream ss(s);
	ll f;
	ss >> f;
	return f;
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	while (t--) {
		ll a, b;
		cin >> a >> b;
		string s1, s2;
		s1 = to_string(a);
		s2 = to_string(b);
		string str1, str2;
		str1 = s1; str2 = s2;
		doi(s1, '5', '6');  doi(s2, '5', '6');
		ll _max = nguyen(s1) + nguyen(s2);
		doi(str1, '6', '5'); doi(str2, '6', '5');
		ll _min = nguyen(str1) + nguyen(str2);
		cout << _min << " " << _max << endl;
	}

	return 0;
}