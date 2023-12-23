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
struct NhanVien {
    string name, gtinh, date, address, id, time;
    friend istream& operator >> (istream & in, NhanVien & a) {
        getline(in, a.name);
        getline(in, a.gtinh);
        getline(in, a.date);
        string s;
        stringstream ss(a.date);
        string s1;
        W(getline(ss, s1, '/')) {
            if (s1.size() == 1) s1 = "0" + s1;
            s += s1;
            if (s1.size() != 4) s += "/"; 
        }
        a.date = s;
        getline(in, a.address);
        getline(in, a.id);
        getline(in, a.time);
         string st;
        stringstream ss1(a.time);
        string s2;
        W(getline(ss1, s2, '/')) {
            if (s2.size() == 1) s2 = "0" + s2;
            st += s2;
            if (s2.size() != 4) st += "/"; 
        }
        a.time = st;
        return in;
    }
    friend ostream& operator << (ostream & out, NhanVien & a) {
        out << "00001 " << a.name << " " << a.gtinh << " " << a.date << " " << a.address << " " << a.id << " " << a.time;
        return out;
    }
};
int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}