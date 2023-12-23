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
struct tt{
    string name, id, nganh, ten;
    void nhap() {
        getline(cin, name);
        string s;
        stringstream ss(name);
        string s1;
        W(ss >> s1) {
            s = s1;
        }
        ten = s;
        string st;
        getline(cin, st);
        stringstream ss1(st);
        string s2;
        W(ss1 >> s2) {
            nganh += toupper(s2[0]);
        }
    }
};
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    tt a[n  + 5];
    cin.ignore();
    F(int i = 0; i < n ; i ++) {
        a[i].id += "GV";
        string s = to_string(i + 1);
        if (i + 1 < 10)  {
            s = "0" + s;
        }
        a[i].id += s;
        a[i].nhap();
    }
    sort(a, a + n, [] (tt b, tt c) {
        if (b.ten != c.ten) return b.ten < c.ten;
        else return b.id < c.id;
    });
    F(int i = 0; i < n; i ++) {
        cout << a[i].id << " " << a[i].name << " " << a[i].nganh << endl;
    }
	return 0;
}