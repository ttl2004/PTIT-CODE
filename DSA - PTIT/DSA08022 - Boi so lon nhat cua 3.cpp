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
        int n, s = 0;
        cin >> n;
        priority_queue<int, vector<int>, greater<int>> du0, du1, du2;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s += x;
            if (x % 3 == 0) du0.push(x);
            else if (x % 3 == 1) du1.push(x);
            else du2.push(x);
        }
        int du = s % 3;
        if (du == 1) {
            if (!du1.empty()) du1.pop();
            else if (du2.size() >= 2) {
                du2.pop();
                du2.pop();
            }
            else {
                cout << "-1\n";
                continue;
            }
        }
        else if (du == 2) {
            if (!du2.empty()) du2.pop();
            else if (du1.size() >= 2) {
                du1.pop();
                du1.pop();
            }
            else {
                cout << "-1\n";
                continue;
            }
        }
        if (du0.empty() && du1.empty() && du2.empty()) cout << "-1\n";
        else if (s == 0) cout << "0\n";
        else {
            vector<int> ans;
            while (!du0.empty()) {
                ans.pb(du0.top());
                du0.pop();
            }
            while (!du1.empty()) {
                ans.pb(du1.top());
                du1.pop();
            }
            while (!du2.empty()) {
                ans.pb(du2.top());
                du2.pop();
            }
            sort(ans.rbegin(), ans.rend());
            for (auto x : ans) cout << x;
            cout << endl;
        }
	}
	return 0;
}
