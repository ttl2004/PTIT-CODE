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
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i ++) cin >> a[i];
        stack<int> stk_1;
        int left[n + 5];
        for (int i = 0; i < n; i ++) {
            while (!stk_1.empty() && a[i] <= a[stk_1.top()]) stk_1.pop();
            if (stk_1.empty()) {
                left[i] = 0;
            }
            else {
                left[i] = stk_1.top() + 1;
            }
            stk_1.push(i);
        }
        stack<int> stk_2;
        int right[n + 5];
        for (int i = n - 1; i >= 0; i --) {
            while (!stk_2.empty() && a[i] <= a[stk_2.top()]) stk_2.pop();
            if (stk_2.empty()) {
                right[i] = n - 1;
            }
            else {
                right[i] = stk_2.top() - 1;
            }
            stk_2.push(i);
        }
        ll _max = 0;
        for (int i = 0; i < n; i ++) {
            _max = max(_max, (1LL * (right[i] - left[i] + 1) * a[i]));
        }
        cout << _max << endl;
	}
	return 0;
}
