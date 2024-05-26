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
vector<pair<ll, ll>> ans;
void ptich(ll a, ll b) {
    // Nếu a = 0 hoặc b = 0 thì đã phân tích xong.
    if (a == 0 || b == 0)
        return;

    // Nếu b chia hết cho a thì rút gọn luôn về phân số đơn vị.
    if (b % a == 0) {
		ans.pb({1, b / a});
        return;
    }
	
    // Tìm phân số đơn vị lớn nhất không vượt quá a / b.
    ll x = b / a + 1;
    ans.pb({1, x});
    // Tiếp tục phân tích hiệu a / b - 1 / x.
    ptich(a * x - b, b * x);
}

__Tieu_Long__{
    Fast();
    Tests() {
		ll a, b;
		cin >> a >> b;
		ptich(a, b);
		ll len = ans.size();
		for (ll i = 0; i < len - 1; i ++) {
			cout << ans[i].first << "/" << ans[i].second << " + ";
		}
		cout << ans[len - 1].first << "/" << ans[len - 1].second;
		ans.clear();
		cout << endl;
	}
}