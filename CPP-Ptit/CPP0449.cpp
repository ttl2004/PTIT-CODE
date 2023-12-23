#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
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
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<ll> a(n + 5);
        map<ll, int> kt;
        for (int  i = 0; i < n; i++) {
            cin >> a[i];
            kt[a[i]]++;
        }
        sort(a.begin(), a.end());
        ll k = 0;
        for (int i = 0; i < n; i++) {
            if (kt[a[i] + x] > 0 || kt[a[i]- x] > 0) {
                k = 1;
                break;
            }
        } 
        if (k) cout << 1;
        else cout << -1;
        cout << endl;
    }
	return 0;
}