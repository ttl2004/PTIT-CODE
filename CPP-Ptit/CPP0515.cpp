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
    string id, name, lop;
    int d, m, y;
    double gpa;
    void input() {
        cin.ignore();
        getline(cin, name);
        getline(cin, lop);
        scanf("%d/%d/%d", &d, &m, &y);
        cin >> gpa;
    }
    void output(){
        cout << id << " " << name<< lop << " ";
        printf("%.2d/%.2d/%.4d ", d, m, y);
        cout << fixed << setprecision(2) << gpa << endl;
    }
};
string xuly(int i){
    string s = to_string(i);
    while (s.size() < 3) s = "0" + s;
    return s;
}
string xuly_1(string s) {
    stringstream ss(s);
    string s1, s2;
    while (ss >> s1) {
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        s1[0] = toupper(s1[0]);
        s2 += s1;
        s2 += " ";
    }
    return s2;
}
void nhap(SinhVien ds[], int n) {
    for (int i = 0; i < n; i ++) {
        ds[i].id = "B20DCCN";
        ds[i].id += xuly(i + 1);
        ds[i].input();
        ds[i].name = xuly_1(ds[i].name);
    }
}
void sapxep(SinhVien ds[], int n) {
    sort(ds, ds + n, [](SinhVien a, SinhVien b) {
        return a.gpa > b.gpa;
    });
}
void in(SinhVien ds[], int n) {
    for (int i = 0; i < n; i ++) {
        ds[i].output();
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}