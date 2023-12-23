#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
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
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
int n, m , k;
struct KhachHang;
struct MatHang;
struct HoaDon;
map<string, KhachHang> mp1;
map<string, MatHang> mp2;
string xuly(int i) {
    string s = to_string(i);
    while (s.size() <  3) s = "0" + s;
    return s;
}

ll Stoi(string s) {
	stringstream ss(s);
	ll f;
	ss >> f;
	return f;
}
struct KhachHang{
    string id, name, gtinh, date, address;
    void in() {
    	cout << id << " " << name << " " << gtinh << " " << date << " " <<address <<endl; 
    }
};
struct MatHang{
    string id, name, type;
    ll gmua, gban;
    void in() {
    	cout << id << " " << name << " " << type << " " << gmua << " " <<gban <<endl; 
    }
};
struct HoaDon{
    string id, ten_khach, ten_hang;
    ll slg;
    void in() {
    	cout << id << " " << ten_khach << " " << ten_hang << " " << slg <<endl; 

    }
    void out(){
    		cout << id;
			cout << " " << mp1[ten_khach].name << " " << mp1[ten_khach].address << " ";
	        cout << mp2[ten_hang].name << " " << mp2[ten_hang].type << " ";
	        cout << mp2[ten_hang].gmua << " " << mp2[ten_hang].gban << " " << slg << " " << mp2[ten_hang].gban * slg << endl;
    }
};
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	fstream f1, f2, f3;
	f1.open("KH.in", ios::in);
	f2.open("MH.in", ios::in);
	f3.open("HD.in", ios::in);
	vector<string> s1, s2 , s3;
	string str;
	while (getline(f1, str)) {
		if (str != "\n" && str != " ") {
			s1.pb(str);
		}
	}
	while (getline(f2, str)) {
		if (str != "\n" && str != " ") {
			s2.pb(str);
		}
	}
	while (getline(f3, str)) {
		if (str != "\n" && str != " ") {
			s3.pb(str);
		}
	}
	int idx1 = 1, idx2 = 1, idx3 = 1, i1 = 1, i2 = 1, i3 = 1;
	n = Stoi(s1[0]);
	while (idx1 < s1.size()) {
		KhachHang T;
		T.name = s1[idx1++];
		T.gtinh = s1[idx1++];
		T.date = s1[idx1++];
		T.address = s1[idx1++];
		T.id += "KH";
		T.id += xuly(i1);
		//T.in();
		mp1[T.id] = T;
		i1++;
	}
	m = Stoi(s2[0]);
	while  (idx2 < s2.size()) {
		MatHang F;
		F.name = s2[idx2++];
		F.type = s2[idx2++];
		F.gmua = Stoi(s2[idx2++]);
		F.gban = Stoi(s2[idx2++]);
		F.id += "MH";
		F.id += xuly(i2);
		//F.in();
		mp2[F.id] = F;
		i2++;
	}
	k = Stoi(s3[0]);
	while (idx3 < s3.size()) {
		HoaDon P;
		 string s = s3[idx3++];
		 //cout << s;
		stringstream ss(s);
		string x1;
		int dem = 1;
		while (ss >> x1){
			if (dem == 1) {
				P.ten_khach = x1;
			}
			else if (dem == 2) {
				P.ten_hang = x1;
			}
			else {
				P.slg = Stoi(x1);
			}
			dem ++;
		}
		P.id += "HD";
		P.id += xuly(i3);
		//P.in();
		i3++;
		P.out();
	}
	return 0;
}