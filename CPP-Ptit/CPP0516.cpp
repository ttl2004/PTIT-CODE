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
    int id;
    string name, type;
    double mua, ban, loi;
};
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    tt a[n  + 5];
    for (int i = 0; i < n; i ++) {
        a[i].id = i + 1;
        cin.ignore();
        getline(cin, a[i].name);
        getline(cin, a[i].type);
        cin  >> a[i].mua >> a[i].ban;
        a[i].loi = a[i].ban - a[i].mua;
    }
    sort(a, a + n, [] (tt c, tt b) {
        return c.loi > b.loi;
    });
    for (int i = 0; i < n; i++) {
        cout << a[i].id << " " << a[i].name << " " << a[i].type << " ";
        cout << fixed << setprecision(2) << a[i].loi << endl;
    }
	return 0;
}
/*2 Tu lanh Side by Side Dien lanh 7699.00
1 May tinh SONY VAIO Dien tu 1299.00
3 Banh Chocopie Tieu dung 9.50*/