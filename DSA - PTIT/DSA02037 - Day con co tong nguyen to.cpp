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
vector<vector<int>> ans;
void backtrack(int pos, int a[], int n, vector<int> &choose) {
	if (pos == n) {
		ans.pb(choose);
		return;
	}
	//Khong lay phan tu tai vi tri pos
	backtrack(pos + 1, a, n, choose);
	
	//Lay phan tu tai vi tri pos
	choose.pb(a[pos]);
	backtrack(pos + 1, a, n , choose);
	choose.pop_back();
}
int check(int n) {
	if (n < 2) return 0;
	for (int i = 2; i * i <= n; i ++) {
		if (n % i == 0) return 0;
	}
	return 1;
}
int kiemtra(vector<int> a) {
	int sum = 0;
	for (auto x : a) sum += x;
	return check(sum) ? 1 : 0;
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int n;
		cin >> n;
		int a[n + 5];
		vector<int> choose;
		for (int i = 0; i < n; i ++) {
			cin >> a[i];
		}
		sort(a, a + n, greater<int> ());
		backtrack(0, a, n , choose);
		sort(ans.begin(), ans.end());
		for (auto x : ans) {
			if (kiemtra(x)) {
				for (auto y : x) {
					cout << y << " ";
				}
				cout << endl;
			}
		}
		ans.clear();
	}
	return 0;
}
