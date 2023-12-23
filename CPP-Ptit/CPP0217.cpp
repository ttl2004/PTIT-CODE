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
        int n, k;
        cin >> n >> k;
        vector<int> b;
        int a[n + 5][n + 5];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n ; j++) {
                cin >> a[i][j];
                b.pb(a[i][j]);
            }
        }
        sort(b.begin(), b.end());
        cout << b[k - 1] << endl;
    }
	return 0;
}