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
    string msv, name, lop, email;
    friend istream& operator >> (istream &in, tt &a) {
        getline(in, a.msv);
        getline(in, a.name);
        getline(in, a.lop);
        getline(in, a.email);
        return in;
    }
    friend ostream& operator << (ostream &out, tt &a) {
        out << a.msv << " " << a.name << " " << a.lop << " " << a.email << endl;
        return out;
    }
};
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<tt> a(n);
    cin.ignore();
    for (int i = 0; i < n; i ++) cin >> a[i];
    sort(a.begin(), a.end(), [] (tt b, tt c) {
        if (b.lop != c.lop) return b.lop < c.lop;
        else return b.msv < c.msv;
    });
    for (int i = 0; i < n; i++) cout << a[i];
	return 0;
}