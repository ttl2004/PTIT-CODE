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
void nhan(string a, string b) {
	int k = a.size() + b.size() + 5;
	int s[k];
	for (int i = 0; i <= k; i ++) s[i] = 0;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int x[a.size() + 5], y[b.size() + 5];
	for (int i = 0; i < a.size(); i ++) x[i] = a[i] - '0';
	for (int i = 0; i < b.size(); i ++) y[i] = b[i] - '0';
	for (int i = 0; i < a.size(); i ++) {
		int j = 0, nho = 0;
		for (j = 0; j < b.size(); j ++) {
			int temp = x[i]*y[j] + nho + s[i + j];
			s[i + j] = temp % 10;
			nho = temp / 10;
		}
		if (nho) s[i + j] = nho;
	}
	while (k > 1 && s[k - 1] == 0) k--;
	for (int i = k - 1; i >= 0; i --) cout << s[i];
	cout << endl;
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string a, b;
		cin >> a >> b;
		nhan(a, b);
	}

	return 0;
}
//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
