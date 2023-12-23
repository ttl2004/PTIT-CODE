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
#define long long long
#define pb push_back
#define endl '\n'
using namespace std;
int check(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

bool kt(int n) {
    int d = 10;
    while (n > 0) {
        if (d <= n % 10)
            return 0;
        d = n % 10;
        n /= 10;
    }
    return 1;
}

bool kt2(int n) {
    int d = -1;
    while (n > 0) {
        if (d >= n % 10)
            return 0;
        d = n % 10;
        n /= 10;
    }
    return 1;
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a = pow(10, n - 1);
        int b = pow(10, n);
        int cnt = 0;
        for (int i = a; i < b; i++) {
            if ( (kt(i) == 1 || kt2(i) == 1)) {
                if (check(i) == 1) cnt++;
                //cout << i << " ";
            }

        }
        cout << cnt << endl;
    }
	return 0;
}