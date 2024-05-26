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
		int n;
		cin >> n;
		int arr[n + 5], max_left[n + 5], min_right[n + 5];
		for (int i = 0; i< n; i ++) cin >> arr[i];
		max_left[0] = arr[0]; 
		min_right[n - 1] = arr[n - 1];
		for (int i = 1; i < n; i ++) max_left[i] = max(max_left[i - 1], arr[i]);
		for (int i = n - 2; i >= 0; i --) min_right[i] = min(min_right[i + 1], arr[i]);
		int k = 0;
		vector<int> idx;
		for (int i = 0; i < n - 1; i ++) {
			if (max_left[i] <= min_right[i + 1]) {
				k ++;
				idx.pb(i);
			}
		} 
		cout << k << endl;
		int len = idx.size();
		for (int i = 0; i < len; i ++) cout << idx[i] + 1 << " ";
		cout << endl;
	}
	return 0;
}
