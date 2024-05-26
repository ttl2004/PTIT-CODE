#include <bits/stdc++.h>
#define __Tieu_Long__ int main()
#define Fast(); ios_base :: sync_with_stdio (0); cin.tie(0); cout.tie(0);
#define Tests() int t; cin >> t; while (t --)
#define Test() int t = 1; while (t --)
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

__Tieu_Long__{
	Fast();
	Tests() {
        int n, m;
        cin >> n >> m;
        int matrix[n + 5][m + 5], a[n + 5][m + 5];
        memset(a, 0, sizeof(a));
        for (int i = 0; i < n; i ++) {
            for (int j = 0; j < m; j ++) {
                cin >> matrix[i][j];
                if (i == 0) {
                    a[i][j] = matrix[i][j];
                }
                else {
                    if (matrix[i][j] == 1) {
                        if (a[i - 1][j] >= 1) {
                            a[i][j] = a[i - 1][j] + 1;
                        }
                        else {
                            a[i][j] = 1;
                        }
                    }
                }
            }
        }
        ll _max = 0;
        for (int hang = 0; hang < n; hang ++) {
            stack<int> stk_1;
            int left[m + 5];
            for (int i = 0; i < m; i ++) {
                while (!stk_1.empty() && a[hang][i] <= a[hang][stk_1.top()]) stk_1.pop();
                if (stk_1.empty()) {
                    left[i] = 0;
                }
                else {
                    left[i] = stk_1.top() + 1;
                }
                stk_1.push(i);
            }
            stack<int> stk_2;
            int right[m + 5];
            for (int i = m - 1; i >= 0; i --) {
                while (!stk_2.empty() && a[hang][i] <= a[hang][stk_2.top()]) stk_2.pop();
                if (stk_2.empty()) {
                    right[i] = m - 1;
                }
                else {
                    right[i] = stk_2.top() - 1;
                }
                stk_2.push(i);
            }
            for (int i = 0; i < m; i ++) {
                _max = max(_max, (1LL * (right[i] - left[i] + 1) * a[hang][i]));
            }
        }
        cout << _max << endl;
	}
	return 0;
}
