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
void Try(int i, int j, vector<int> a, int kq[], int n, int k) {
	for (int f = j; f <= n - k + i; f ++) {
		kq[i] = a[f - 1];
		if (i == k) {
			for (int i = 1; i <= k; i ++) {
				cout << kq[i] << " ";
			}
			cout << "\n";
		}
		else Try(i + 1, f + 1, a, kq, n, k);
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
		set<int> st;
		for (int i = 1; i <= n; i ++) {
			int x;
			cin >> x;
			st.insert(x);
		}
		vector<int> a(st.begin(), st.end());
		int kq[k + 5];
		n = a.size();
		Try(1, 1, a, kq, n , k);
		cout << endl;
	}

	return 0;
}
