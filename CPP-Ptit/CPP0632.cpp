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
struct KhachHang;
struct MatHang;
struct HoaDon;
map<string, KhachHang> mp1;
map<string, MatHang> mp2;
int i1 = 1, i2 = 1, i3 = 1;
string xuly(int i) {
    string s = to_string(i);
    while (s.size() <  3) s = "0" + s;
    return s;
}

struct KhachHang{
    string id1, name1, gtinh, date, address;
    //friend struct HoaDon;
    friend istream& operator >> (istream & in, KhachHang &a){
        scanf("\n");
        getline(cin, a.name1);
        getline(cin, a.gtinh);
        getline(cin, a.date);
        getline(cin, a.address);
        a.id1 += "KH";
        a.id1 += xuly(i1);
        mp1[a.id1] = a;
        i1 ++;
        return in;
    }
    //  friend ostream& operator << (ostream & out, KhachHang &a){
    //     cout << a.name1 << " " << a.id1;
    //     return out;
    // }
};
struct MatHang{
    string id, name, type;
    ll gmua, gban;
   // friend struct HoaDon;
    friend istream& operator >> (istream & in, MatHang &b){
        scanf("\n");
        getline(cin, b.name);
        getline(cin, b.type);
        cin >> b.gmua >> b.gban;
        b.id += "MH";
        b.id += xuly(i2);
        i2 ++;
        mp2[b.id] = b;
        return in;
    }
};
struct HoaDon{
    string id, ten_khach, ten_hang;
    ll slg, loinhuan;
    friend istream& operator >> (istream & in, HoaDon &a){
        scanf("\n");
        cin >> a.ten_khach;
        cin >> a.ten_hang;
        cin >> a.slg;
        a.id += "HD";
        a.id += xuly(i3);
        a.loinhuan = a.slg * mp2[a.ten_hang].gban - a.slg * mp2[a.ten_hang].gmua;
        i3 ++;
        return in;
    }
    friend ostream& operator << (ostream & out, HoaDon &a){
        out << a.id << " " << mp1[a.ten_khach].name1 << " " << mp1[a.ten_khach].address << " ";
        out << mp2[a.ten_hang].name << " " << a.slg << " ";
        out << a.slg * mp2[a.ten_hang].gban << " " <<  a.loinhuan << endl;
        return out;
    }
};
void sapxep(HoaDon dshd[], int K) {
    sort (dshd, dshd + K, [] (HoaDon a, HoaDon b) {
        return a.loinhuan >= b.loinhuan;
    });
}
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    sapxep(dshd, K);
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}