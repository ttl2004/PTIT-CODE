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
ll fb[93];
void fibo() {
    fb[0] = 0;
    fb[1] = 1;
    for (int i = 2; i < 93; i++) fb[i] = fb[i - 1] + fb[i - 2];
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    fibo();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            for (int it = 0; it < 93; it++) {
                if (a[i] == fb[it]) {
                    cout << a[i] << " ";
                    break;
                }
            } 
        }
        cout << endl;
    }
	return 0;
}