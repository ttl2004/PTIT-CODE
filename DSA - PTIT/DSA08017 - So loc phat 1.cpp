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
	while (t --) {
		int n;
		cin >> n;
		queue<string> qe;
		vector<string> kq;
		qe.push("6");
		qe.push("8");
		while (true) {
			string tmp = qe.front();
			if (tmp.size() > n) break;
			kq.pb(tmp);
			qe.pop();
			string s1 = tmp + "6";
			string s2 = tmp + "8";
			qe.push(s1);
			qe.push(s2);
		}
		int len = kq.size();
		for (int i = len - 1; i >= 0; i --) cout << kq[i] << " ";
		cout << endl;
	}
	return 0;
}
