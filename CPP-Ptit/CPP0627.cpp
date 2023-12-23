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
    string id, name, nganh;
    void in(){
        cout << id << " " << name << " " << nganh << endl;
    }
};
string xuly_1(int i){
    string s = to_string(i);
    while (s.size() < 2) s = "0" + s;
    s = "GV" + s;
    return s;
}
string xuly_2(string s) {
    string st = s;
    transform(st.begin(), st.end(), st.begin(), ::tolower);
    return st;
}
string xuly_3(string s) {
    stringstream ss(s);
    string s1, s2;
    while (ss >> s1) {
        s2 += toupper(s1[0]);
    }
    return s2;
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<tt> a(n + 5), b(n + 5);
    cin.ignore();
    for (int i = 0; i < n; i ++) {
        getline(cin, a[i].name);
        getline(cin, a[i].nganh);
        a[i].id = xuly_1(i + 1);
        a[i].nganh = xuly_3(a[i].nganh);
        b[i].id = xuly_2(a[i].id);
        b[i].name = xuly_2(a[i].name);
        b[i].nganh = xuly_2(a[i].nganh);
    }
    int q;
    cin >> q;
    cin.ignore();
    for (int i = 0; i < q; i ++) {
        string st, x;
        getline(cin, st);
        x = xuly_2(st);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << st << ":\n";
        for (int j = 0; j < n; j ++) {
            if (b[j].id.find(x) != -1 || b[j].name.find(x) != -1 || b[j].nganh.find(x) != -1) {
                a[j].in();
            }
        }
    }
	return 0;
}