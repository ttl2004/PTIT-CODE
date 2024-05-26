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
		int n, m, k;
        cin >> n >> m >> k;
        long long a[n], b[m], c[k];  
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        for(auto &x : c) cin >> x;
        int i = 0, j = 0, f = 0;
        int kt = 0;
        while (i < n && j < m && f < k) {
            if (a[i] == b[j] && b[j] == c[f]) {
                cout << a[i] << " ";
                i++, j++, f++;
                kt = 1;
            }
            else if (a[i] < b[j]) i++;
            else if (b[j] < c[f]) j++;
            else f++;
        }
        if (!kt) cout << -1;
        cout << endl;
	}

 
	return 0;
}
