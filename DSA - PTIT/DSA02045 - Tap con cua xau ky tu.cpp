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
vector<vector<char>> ans;
void backtrack(int pos, string s, int n, vector<char> &choose) {
	if (pos == n) {
		ans.pb(choose);
		return;
	}
	//Khong lay phan tu tai vi tri pos
	backtrack(pos + 1, s, n, choose);
	
	//Lay phan tu tai vi tri pos
	choose.pb(s[pos]);
	backtrack(pos + 1, s, n , choose);
	choose.pop_back();
}
int check(vector<int> x){
	vector<int> y = x;
	sort(y.begin(), y.end());
	return (x == y) ? 1 : 0;
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int n;
		string s;
		cin >> n >> s;
		vector<char> choose;
		backtrack(0, s, n , choose);
		sort(ans.begin(), ans.end());
		for (auto x : ans) {
			if (x.size() > 0) {
				for (auto y : x) {
					cout << y;
				}
				cout << " ";
			}
		}
		cout << endl;
		ans.clear();
	}
	return 0;
}
