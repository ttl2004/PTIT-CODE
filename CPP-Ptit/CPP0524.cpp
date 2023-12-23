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
struct SinhVien{
    string msv, name, lop;
    double a, b , c;
};
void nhap(SinhVien &ds) {
    cin.ignore();
    getline(cin, ds.msv);
    getline(cin, ds.name);
    getline(cin, ds.lop);
    cin >> ds.a >> ds.b >> ds.c;
}
bool cmp(const SinhVien &sv1, const SinhVien &sv2) {
    return sv1.msv < sv2.msv;
}

void sap_xep(SinhVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

void in_ds(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " " << ds[i].msv << " " << ds[i].name << " " << ds[i].lop << " ";
        cout << fixed << setprecision(1) << ds[i].a << " " << ds[i].b << " " << ds[i].c << endl;
    }
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
/*
1 B20DCAT001 Le Van Nam D20CQAT02-B 6.0 6.0 4.0

2 B20DCCN111 Tran Hoa Binh D20CQCN04-B 9.0 5.0 6.0

3 B20DCCN999 Nguyen Van An D20CQCN04-B 10.0 9.0 8.0
*/