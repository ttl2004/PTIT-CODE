#include <bits/stdc++.h>
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
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n + 5], L[n + 5], R[n + 5];
        for (int  i = 0; i < n; i ++) {
            cin >> a[i];
            L[i] = 1;
            R[i] = 1;
        }
        for (int i = 0; i < n; i ++) {
            for (int j = 0; j < i; j ++) {
                if (a[i] > a[j] && L[i] < L[j] + 1) {
                    L[i] = L[j] + 1;
                }
            }
        }
        for (int i = n - 1; i >= 0; i --) {
            for (int j = n - 1; j > i; j --) {
                if (a[i] > a[j] && R[i] < R[j] + 1) {
                    R[i] = R[j] + 1;
                }
            }
        }
        // for (int i = 0; i < n; i ++) cout << L[i] << " "; cout << endl;
        // for (int i = 0; i < n ; i++) cout << R[i] << " "; cout << endl;
        int _max = 0;
        for (int i = 0; i < n; i ++) {
            _max = max(_max, R[i] + L[i] - 1);
        }
        cout << _max << endl;

    }
	return 0;
}