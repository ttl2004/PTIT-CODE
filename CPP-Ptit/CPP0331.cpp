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
string add(string a, string b) {
	int len = max(a.size(), b.size());
	while (a.size() < len) a = "0" + a;
	while (b.size() < len) b = "0" + b;
	int z[10005];
	int du = 0, k = 0;
	reverse(begin(a), end(a));
	reverse(begin(b), end(b));
	for (int i = 0; i < len ; i++) {
		int temp = (a[i] - '0') + (b[i] - '0') + du;
		z[k++]=temp%10;
		du=temp/10;
	}
	if (du == 1) {
		z[k++] = du;
	}
	k -= 1;
	while (k > 0 && z[k] == 0) k--;
	string res;
	for (int i = k; i >= 0; i--) {
		res += (z[i] + '0');
	}
	return res;
}
bool check(string s, ll idx, ll len_1, ll len_2) { 
	string s1 = s.substr(idx, len_1); 
	string s2 = s.substr(idx + len_1, len_2); 
	string s3 = add(s1, s2); 
	if (s3.size() > (s.size() - len_1 - len_2 - idx)) return false; 
	if (s3 == s.substr(idx + len_1 + len_2, s3.size())) { 
		if (s.size() == idx + len_1 + len_2 + s3.size()) return true; 
		else return check(s, idx + len_1, len_2, s3.size()); 
	} 
	return false; 
} 
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t -- ) {
		string s; 
		cin >> s;
		ll n = s.size(); 
		int kt = 0;
		for (ll i = 1; i < n; i ++) { 
			for (ll j = i; j <= n - i; j ++) { 
				if (check(s, 0, i, j) == true) { 
					cout << "Yes\n";
					kt = 1;
					break;
				} 
			} 
			if(kt) break;
		} 
		if (!kt) cout << "No\n"; 
	}

	return 0;
}
