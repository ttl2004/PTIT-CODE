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
const ll maxN = 1e3 + 5;
const ll mod = 1e9 + 7;
ll dp[maxN + 5][maxN + 5];
void tohop() {
    for (int i = 0; i <= maxN; i++) dp[i][0] = 1;
    for (int i = 0; i <= maxN; i++) dp[i][i] = 1;
    for (int i = 1; i <= maxN; i++) {
        for (int j = 1; j < i; j++) {
            dp[i][j] = dp[i - 1][j - 1] + dp[i- 1][j];
            dp[i][j] %= mod;
        }
    }
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    tohop();
    int t; 
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        cout << dp[n][k] << endl;
    }
	return 0;
}