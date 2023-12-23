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
class PhanSo{
    public:
        ll tu, mau;
        PhanSo (ll t, ll m) {
            tu = t;
            mau = m;
        }
        void rutgon(){
            ll ucln = __gcd(tu, mau);
            tu /= ucln;
            mau /= ucln;
        }
        friend istream &operator >>(istream &in, PhanSo &a){
            cin >> a.tu >> a.mau;
            return in;
        }
        friend ostream &operator <<(ostream &out, PhanSo &a){
            cout << a.tu << "/" << a.mau;
            return out;
        }
};
int main() {
    PhanSo p(1,1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}