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
#define long long long
#define pb push_back
#define endl '\n'
using namespace std;
struct SinhVien{
    string name, lop, msv;
    int d, m ,y;
    float gpa;
};
string MSV(int i)
{
    string s = to_string(i);
    while (s.length() < 3)
        s = '0' + s;
    return "B20DCCN" + s;
}
void nhap(struct SinhVien ds[], int N) {
    for (int i = 0; i < N ; i++) {
        scanf("\n");
        ds[i].msv = MSV(i + 1);
        getline(cin, ds[i].name);
        cin >> ds[i].lop;
        scanf("%d/%d/%d" , &ds[i].d, &ds[i].m, &ds[i].y);
        cin >> ds[i].gpa;
    }
}
void in(struct SinhVien ds[], int N) {
    for (int i = 0; i < N; i++) {
        cout << ds[i].msv << " " << ds[i].name << " " << ds[i].lop << " ";
        printf("%.2d/%.2d/%.4d %.2lf\n", ds[i].d, ds[i].m, ds[i].y, ds[i].gpa);
    }
}
int main() {
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}