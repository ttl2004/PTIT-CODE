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
void Try(int i, int j, int a[], vector<string> arr, int n, int k) {
	for (int f = j; f <= n - k + i; f ++) {
		a[i] = f;
		if (i == k) {
			for (int i = 1; i <= k; i ++) {
				cout << arr[a[i] - 1];
				if (i != k) cout << " ";
			}
			cout << endl;
		}
		else Try(i + 1, f + 1, a, arr, n, k);
	}
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	while (t --) {
		int n, k;
		cin >> n >> k;
		int a[k + 5];
		set<string> st;
		for (int i = 1; i <= n; i ++) {
			string s;
			cin >> s;
			st.insert(s);
		}
		vector<string> arr(st.begin(), st.end());
		n = arr.size();
		for (int i = 1; i <= k; i ++) {
			a[i] = i;
		}
		Try(1, 1, a, arr, n , k);
	}

	return 0;
}
