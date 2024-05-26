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
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	cin.ignore();
	int kt[t + 5][t + 5];
	memset(kt, 0, sizeof(kt));
	for (int i = 1; i <= t; i ++) {
		string s; 
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		while (ss >> tmp) {
			kt[i][stoi(tmp)] = 1;
			kt[stoi(tmp)][i] = 1;
		}
	}
	for (int i = 1; i <= t; i ++) {
		for (int j = 1; j <= t; j ++) {
			cout << kt[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
/*
3
2 3
1 3
1 2
*/