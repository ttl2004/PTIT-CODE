#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
#define fi first
#define se second
#define F for
#define W while

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
struct sv{
    string lop, name, msv, email, id;
    void nhap() {
        getline(cin, msv);
        getline(cin, name);
        getline(cin, lop);
        getline(cin, email);
    }
};
int main() {
    ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    sv a[n + 5];
    cin.ignore();
    for (int i = 0; i < n ; i++) {
        a[i].nhap();
        a[i].id += a[i].msv[5];
        a[i].id += a[i].msv[6];
    }
    int q;
    cin >> q;
    cin.ignore();
    for (int i = 0; i < q ; i++) {
        string s, str;
        getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        stringstream ss(s);
        string s1;
        while (ss >> s1) {
            str += s1[0];
            if (str.size() == 2) break;
        }
        cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
        for (int j = 0; j < n; j ++) {
            if (a[j].id == str && a[j].lop[3] != 'E' && (str == "AT" || str == "CN")) {
                cout << a[j].msv << " " << a[j].name << " " << a[j].lop << " " << a[j].email << endl;
            }
            else if (a[j].id == str){
                     cout << a[j].msv << " " << a[j].name << " " << a[j].lop << " " << a[j].email << endl;
            }
        }
    }
    return 0;
}