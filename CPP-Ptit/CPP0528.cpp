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
    string msv, name, lop, email, cty;
};
int main() {
    ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    tt a[n + 5];
    for (int i = 0; i < n; i ++) {
        cin.ignore();
        a[i].id = i  + 1;
        getline(cin, a[i].msv);
        getline(cin, a[i].name);
        stringstream ss(a[i].name);
        cin >> a[i].lop >> a[i].email >> a[i].cty;
    }
    sort(a, a + n, [] (tt b, tt c) {
        if (b.cty != c.cty) return b.cty < c.cty;
        else return b.name < c.name;
    });
    int q;
    cin >> q;
    string s;
    for (int i = 0; i < q; i++) {
        cin >> s;
        for (int j = 0; j < n; j ++) {
            if (a[j].cty == s) {
                cout << a[j].id << " " << a[j].msv << " " << a[j].name << " " << a[j].lop << " " << a[j].email << " " << a[j].cty << endl;
            }
        }
    }
    return 0;
}
/*3 B17DCAT092 Cao Danh Huy D17CQAT04-B test3@stu.ptit.edu.vn FPT

2 B17DCCN107 Dao Thanh Dat D17CNPM5 test2@stu.ptit.edu.vn FPT

5 B17DCCN461 Dinh Quang Nghia D17CNPM2 test5@stu.ptit.edu.vn FPT*/