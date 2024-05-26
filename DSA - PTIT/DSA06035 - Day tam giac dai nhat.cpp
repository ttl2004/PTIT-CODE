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


int main() {
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
    int t;
    cin >> t;
    while (t --) {
    	int n;
	    cin >> n;
	    int a[n + 5], l[n + 5], r[n + 5];
	    for(int i = 0; i < n; i++){
	        cin >> a[i];
	    }
	    l[0] = 1;
	    for (int i = 1; i < n; i ++) {
	    	if (a[i] > a[i - 1]) l[i] = l[i - 1] + 1;
	    	else  l[i] = 1;
		}
		r[n - 1] = 1;
		for (int j = n - 2; j >= 0; j --) {
			if (a[j] > a[j + 1]) r[j] = r[j + 1] + 1;
			else r[j] = 1;
		}
		int max_len = 0;
	    for (int i = 0; i < n; i ++) {
	    	max_len = max(max_len, r[i] + l[i] - 1);
		}
		cout << max_len << endl;
	}
    return 0;
}
