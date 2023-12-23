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
int f = 1;
string xuly(int i) {
    string s = to_string(i);
    while (s.size() < 5) s = "0" + s;
    return s;
}
struct NhanVien{
    string id, name, gtinh, address, mst, date;
    int d, y, m;
};
void nhap(NhanVien &ds) {
    if (f==1) cin.ignore();
    ds.id = xuly(f);
    f++;
    getline(cin, ds.name);
    getline(cin, ds.gtinh);
    scanf("%d/%d/%d", &ds.m, &ds.d, &ds.y);
    cin.ignore();
    getline(cin, ds.address);
    getline(cin, ds.mst);
    getline(cin, ds.date);
}
bool cmp (NhanVien a, NhanVien b){
    if (a.y != b.y) return a.y < b.y;
    else if (a.m != b.m) return a.m < b.m;
    else return a.d < b.d;
}

void sapxep(NhanVien ds[], int n) {
    sort(ds, ds + n, cmp);
}
void inds(NhanVien ds[], int n) {
    for(int i = 0; i < n; i ++) {
        cout << ds[i].id << " " << ds[i].name << " " << ds[i].gtinh << " ";
        printf("%.2d/%.2d/%.4d ", ds[i].m, ds[i].d, ds[i].y);
        cout << ds[i].address << " " << ds[i].mst << " " << ds[i].date << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}