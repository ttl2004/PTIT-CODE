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
int check(int n){
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i ++) {
		if (n%i==0) return 0;
	}
	return 1;
}
int add(int n) {
	string s = to_string(n);
	int len = s.size(), sum  = 0;
	for (int i = 0; i < len; i ++) {
		sum += (s[i] - '0');
	}
	return sum;
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	sang();
	int t;
	cin >> t;
	while (t--) {
		int n, s1, s2 = 0;
		cin >> n;
		s1 = add(n);
		if (check(n)) {
			cout << "NO\n";
			continue;
		}
		for (int i = 2; i*i <= n; i++) {
			if (n % i == 0) {
				while (n % i == 0) {
					s2 += add(i);
					n /= i;
				}
			}
			if (n == 1) break;
		}
		if (n > 1) {
			s2 += add(n);
		}
		if (s1 == s2) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}
//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
