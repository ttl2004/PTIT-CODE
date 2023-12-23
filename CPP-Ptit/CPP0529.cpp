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
    int stt;
    string  msv, name, lop, email, company;
    friend istream& operator >> (istream& in, tt& a) {
        getline(cin, a.msv);
        getline(cin, a.name);
        getline(cin, a.lop);
        getline(cin, a.email);
        getline(cin, a.company);
        return in;
    }
    friend ostream& operator << (ostream& out, tt& a) {
        cout << a.stt << " " << a.msv << " " << a.name << " " << a.lop << " " << a.email << " " << a.company << endl;
        return out;
    }
};
bool cmp(tt b , tt c) {
    if (b.msv != c.msv) return b.msv > c.msv;
    else return b.company > c.company;
}
int main() {
    ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<tt> a(n + 5);
    cin.ignore();
    for (int i = 0; i < n; i ++) {
        cin >> a[i];
        a[i].stt = i + 1;
    }
    sort(a.begin(), a.end(), cmp);
    int q; 
    cin >> q;
    for (int i = 0; i < q; i ++ ) {
        string s;
        cin >> s;
        for (int j = n - 1; j >= 0; j --) {
            if (a[j].company == s) {
                cout << a[j];
            }
        }
    }
    return 0;
}