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
        string s;
        cin >> s;
        int len = s.size();
        int Swap = 0, cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < len; i ++) {
            if (s[i] == '[') cnt1 ++;
            else cnt2 ++;
            if(cnt2 > cnt1) {
                for (int j = i + 1; j < len; j ++) {
                    if (s[j] != s[i]) {
                        Swap += j - i;
                        cnt1 ++;
                        cnt2 --;
                        swap(s[i], s[j]);
                        break;
                    }
                }
            }
        }
        cout << Swap << endl;
	}
	return 0;
}
