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
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;
struct SinhVien {
    string name, msv;
    string date;
    double tong;
};
void nhap(struct SinhVien& A) {
    getline(cin, A.name);
    cin >> A.msv;
    cin >> A.date;
    cin >> A.tong;
    string s, str;
    stringstream ss(A.date);
    while (getline(ss, s, '/')) {
        if (s.size() < 2) {
            s = "0" + s;
            s += "/";
        }
        if (s. size() == 2) s += "/";
        str += s;
    }
    A.date = str;
}
void in(struct SinhVien& A) { 
    cout << "B20DCCN001 ";
    cout << A.name <<  " " << A.msv << " " << A.date << " " ;
    cout << fixed << setprecision(2) << A.tong;
}
int main() {
	struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}