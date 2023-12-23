#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'

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
	string name, lop;
	int d, m , y;
	double gpa;
	void nhap(){
		getline(cin, name);
		string s, s1;
		s = name;
		stringstream ss(s);
		string s2;
		while (ss >> s2) {
			transform(s2.begin(), s2.end(), s2.begin(), :: tolower);
			s2[0] = toupper(s2[0]);
			s1 += s2;
			s1 += " ";
		}
		name = s1;
		cin >> lop;
		scanf("%d/%d/%d", &d, &m, &y);
		cin >> gpa;
	}
	void xuat() {
		cout << "B20DCCN001 " << name << lop << " ";
		printf("%.2d/%.2d/%d %.2lf", d, m , y, gpa); 
	}
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
