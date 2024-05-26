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
int Stoi(string s) {
	stringstream ss(s);
	int f;
	ss >> f;
	return f;
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t --) {
		int n, k;
		cin >> n >> k;
		string s[n + 5];
		int arr[k + 5];
		for (int i = 0 ; i < n; i ++) cin >> s[i];
		for (int i = 0; i < k; i ++) {
			arr[i] = i;
		}
		int min_value = 1e18;
		do{
			int _min = 1e18, _max = 0;
			for (int i = 0; i < n; i ++) {
				string st;
				for (int j = 0; j < k; j ++) {
					st += s[i][arr[j]];
				}
				_min = min(_min, Stoi(st));
				_max = max(_max, Stoi(st));
			}
			min_value = min(min_value, _max - _min);
		}while (next_permutation(arr, arr + k));
		cout << min_value;
	}
	return 0;
}
