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

struct NhanVien {
    string id, name, gt, day, address, tax, date;
};

void nhap(NhanVien &a) {
    a.id = "00001";
    getline(cin, a.name);
    cin >> a.gt >> a.day;
    cin.ignore();
    getline(cin, a.address);
    cin >> a.tax >> a.date;
}

void in(NhanVien a) {
    cout << a.id << " " << a.name << " " << a.gt << " " << a.day << " " << a.address << " " << a.tax << " " << a.date;
}

int main() {
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}