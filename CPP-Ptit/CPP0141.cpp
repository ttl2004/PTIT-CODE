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
vector<ll> fibo(1e6 + 1, 0);
void fb() {
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 1e6; i++) fibo[i] = fibo[i - 1] + fibo[i - 2];
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    fb();
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        for (int i = 0; i < fibo.size(); ++i) {
            if (fibo[i] >= n) {
                if (n == fibo[i])
                    cout << "YES\n";
                else
                    cout << "NO\n";
                break;
            }
        }
    }
	return 0;
}