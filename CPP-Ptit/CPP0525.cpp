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
struct tt{
    string msv, name, lop;
    double A, B , C;
};

int main() {
    ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<tt> a(n + 5);
    for (int i = 0; i < n; i ++) {
        cin.ignore();
        getline(cin, a[i].msv);
        getline(cin, a[i].name);
        getline(cin, a[i].lop);
        cin >> a[i].A >> a[i].B >> a[i].C;
    }
    sort(a.begin(), a.end(), [] (tt b, tt c) {
        return b.name > c.name;
    });
    for (int i = n - 1; i >= 0; i --) {
        cout << n - i << " ";
        cout << a[i].msv << " " << a[i].name << " " << a[i].lop << " ";
        cout << fixed << setprecision(1) << a[i].A << " " << a[i].B << " " << a[i].C << endl;
    }
    return 0;
}