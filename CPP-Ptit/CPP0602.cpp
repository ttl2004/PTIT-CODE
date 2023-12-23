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
class SinhVien{
    public:
        string msv, name, lop;
        int d, m, y;
        double gpa;

        friend istream &operator >>(istream &in, SinhVien &a){
            a.msv = "B20DCCN001";
            getline(cin, a.name);
            getline(cin, a.lop);
            scanf("%d/%d/%d", &a.d, &a.m, &a.y);
            cin >> a.gpa;
            return in;
        }
        friend ostream &operator <<(ostream &out, SinhVien &a){
            cout << a.msv << " " << a.name <<  " " << a.lop << " ";
            printf("%.2d/%.2d/%.4d ", a.d, a.m, a.y);
            cout << fixed << setprecision(2) << a.gpa;
            return out;
        }
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}