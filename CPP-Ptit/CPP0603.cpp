#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
#define F for
#define W while
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
struct SinhVien{
	string name, lop, date;
	double gpa;
	friend istream& operator >> (istream & in, SinhVien &a) {
		getline(in, a.name);
		string s;
		stringstream ss(a.name);
		string s1;
		W(ss >> s1) {
			transform(s1.begin(), s1.end(), s1.begin(), :: tolower);
			s1[0] = toupper(s1[0]);
			s += s1;
			s += " ";
		}
		a.name = s;
		getline(in, a.lop);
		getline(in, a.date);
		string s2;
		stringstream ss1(a.date);
		string s3;
		W(getline(ss1, s3, '/')){
			if (s3.size() == 1) s3 = "0" + s3;
			s2 += s3;
			if (s3.size() != 4) s2 += "/"; 
		}
		a.date = s2;
		in >> a.gpa;
		return in;
	}
	friend ostream& operator << (ostream& os, SinhVien & a) {
		os << "B20DCCN001 " << a.name << a.lop << " " << a.date << " ";
		os << fixed << setprecision(2) << a.gpa;
		return os;
	}
};
int main(){
	SinhVien a;
    cin >> a;
    cout << a;
    return 0;
	return 0;
}

//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
