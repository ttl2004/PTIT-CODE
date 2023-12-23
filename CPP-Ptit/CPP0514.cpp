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
    int d, m, y;
    double diem;
};
string MSV(int i){
    string s = to_string(i);
    while (s.length() < 3)
        s = '0' + s;
    return "B20DCCN" + s;
}
string xuly(string &s) {
    string s1, s2;
    stringstream ss(s);
    while (ss >> s1) {
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        s1[0] = toupper(s1[0]);
        s2 += s1;

        s2 += " ";
    }
    return s2;
}
void nhap(SinhVien a[], int n) {
    string s;
    for (int i = 0; i < n ; i ++) {
        cin.ignore();
        a[i].msv = MSV(i + 1);
        getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        a[i].name = xuly(s);
        getline(cin, a[i].lop);
        scanf("%d/%d/%d%lf", &a[i].d, &a[i].m, &a[i].y, &a[i].diem);
    }
}
void in(SinhVien a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i].msv << " " << a[i].name << " " << a[i].lop << " ";
        printf("%.2d/%.2d/%.2d %.2lf\n", a[i].d, a[i].m, a[i].y, a[i].diem);
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
/*B20DCCN001 Nguyen Van Binh D20CQCN01-B 02/12/2002 3.10
*/