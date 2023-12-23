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
struct ThiSinh {
    string name;
    string date;
    double a, b, c, tong;
};
void nhap(struct ThiSinh& A) {
    getline(cin, A.name);
    cin >> A.date;
    cin >> A.a >> A.b >> A.c;
    A.tong = A.a + A.b + A.c;
}
void in(struct ThiSinh& A) {
    cout << A.name << " " << A.date << " " ;
    cout << fixed << setprecision(1) << A.tong;
}
int main() {
	struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}