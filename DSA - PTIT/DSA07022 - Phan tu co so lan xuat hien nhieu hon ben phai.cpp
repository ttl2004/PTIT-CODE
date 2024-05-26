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
        map<int, ll> cnt;
        for (int i = 0; i < n; i ++) {
            cin >> a[i];
            cnt[a[i]] ++;
        }
        stack<int> stk;
        int kq[n + 5];
        for (int i = n - 1; i >= 0; i --) {
            while (!stk.empty() && cnt[a[i]] >= cnt[a[stk.top()]]) stk.pop();
            if (stk.empty()) {
                kq[i] = -1;
            }
            else {
                kq[i] = a[stk.top()];
            }
            stk.push(i);
        }
        for (int i = 0; i < n; i ++) cout << kq[i] << " ";
        cout << endl;
	}
	return 0;
}
