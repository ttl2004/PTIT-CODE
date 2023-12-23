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

struct PhanSo {
    long long tu, mau;
};

void nhap(PhanSo &p) {
    cin >> p.tu >> p.mau;
}
void rutgon(PhanSo &p) {
    long long g = __gcd(p.tu, p.mau);
    p.tu /= g;
    p.mau /= g;
}

void in(PhanSo p) {
    cout << p.tu << "/" << p.mau;
}

int main() {
    PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}