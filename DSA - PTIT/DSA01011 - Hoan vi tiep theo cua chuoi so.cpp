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
	int t;
	cin >> t;
	while (t --) {
		int number;
		string s;
		cin >> number >> s;
		int n = s.size();
		int a[n + 5];
		for (int i = 0; i < n; i ++) {
			a[i] = s[i] - '0';
		}
		int ok = 1;
		for (int i = 1; i < n; i ++) {
			if (a[i] <= a[i - 1]) {
				ok = 1;
			}
			else {
				ok = 0;
				break;
			}
		}
		next_permutation(a, a + n);
		cout << number << " ";
		if (!ok) for (int i = 0; i < n; i ++) cout << a[i];
		else cout << "BIGGEST";
		cout << endl;
	}
	return 0;
}
