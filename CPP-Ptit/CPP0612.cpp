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
int j = 1;
string xuly(int i) {
    string s = to_string(i);
    while (s.size() < 3) s = "0" + s;
    return s;
}
string solve(string s) {
    string str;
    stringstream ss(s);
    string s1;
    while (ss >> s1) {
        s1[0] = toupper(s1[0]);
        str += s1;
        str += " ";
    }
    return str;
}
struct SinhVien{
    string msv, name, lop;
    int d, m, y;
    double gpa;
    friend istream& operator >> (istream &in, SinhVien &a) {
        scanf("\n");
        getline(cin, a.name);
        getline(cin, a.lop);
        scanf("%d/%d/%d", &a.d, &a.m, &a.y);
        cin >> a.gpa;
        transform(a.name.begin(), a.name.end(), a.name.begin(), ::tolower);
        a.name = solve(a.name);
        a.msv += "B20DCCN";
        a.msv += xuly(j);
        j++;
        return in;
    }
    friend ostream& operator << (ostream &out, SinhVien &a) {
        cout << a.msv << " " << a.name  << a.lop << " ";
        printf("%.2d/%.2d/%d ", a.d, a.m , a.y);
        cout << fixed << setprecision(2) << a.gpa << endl;
        return out;
    }

};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}