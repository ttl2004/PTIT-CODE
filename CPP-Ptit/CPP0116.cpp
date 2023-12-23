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
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;
vector<int> check(1e4 + 1, 0);
void sang() {
    check[1] = 1;
    for (int i = 2; i <= 100; ++i) {
        if (!check[i]) {
            for (int j = i; j <= 1e4; j += i) {
                if (!check[j])
                    check[j] = i;
            }
        }
    }
    for (int i = 2; i <= 1e4; ++i) {
        if (!check[i])
            check[i] = i;
    }
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);    
    int t;
    cin >> t;
    sang();
    while (t--) {
        int n; 
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cout << check[i] << " ";
        }
        cout << endl;
    }
	return 0;
}