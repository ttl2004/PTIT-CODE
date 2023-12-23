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
    string id, name;
    int slg;
};
int main() {
    ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<tt> a(n + 5);
    for (int i = 0; i < n; ++i)
    {
        cin.ignore();
        getline(cin, a[i].id);
        getline(cin, a[i].name);
        cin >> a[i].slg;;
    }
    sort(a.begin(), a.end(), [] (tt A, tt B) {
        if (A.slg > B.slg)return true;
        if (A.slg == B.slg && A.id < B.id)return true;
        return false;
    });
    int q;
    cin >> q;
    for (int i = 0; i < q; i ++) {
        int l, r;
        cin >> l >> r;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << l << " DEN " << r << " SINH VIEN:\n";
        for (int j = 0; j < n; j ++) {
            if (a[j].slg >= l && a[j].slg <= r) {
                 cout << a[j].id << " " << a[j].name << " " << a[j].slg << endl;
            }
        }
    }
    return 0;
}