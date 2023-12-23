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
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	fstream f1 ,f2;
	f1.open("DATA1.in", ios::in);
	f2.open("DATA2.in", ios::in);
//	f1.open("E:/DATAIN.txt", ios::in);
//	f2.open("e:/DATAIN1.txt", ios::in);
	set<string> s , S1, S2;
	string s1, s2;
	map<string, int> mp1, mp2;
	while (f1 >> s1) {
		transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
		s.insert(s1);
		S1.insert(s1);
		mp1[s1]++;
	}
	while (f2 >> s2) {
		transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
		s.insert(s2);
		S2.insert(s2);
		mp2[s2]++;
	}
	vector<string> a(S1.begin(), S1.end()), b(S2.begin(), S2.end());
	vector<string> str(s.begin(), s.end());
	int len = str.size(), n = a.size();
	for (int i = 0; i < len; i++) cout << str[i] << " ";
	cout << endl;
	for (int i = 0; i < n; i++) {
		if (mp2.find(a[i]) != mp2.end()){
			cout << a[i] << " ";
		}
	}
	f1.close();
	f2.close();
	return 0;
}
//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
