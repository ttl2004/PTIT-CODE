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
	deque<int> dq;
	while (t --) {
		string s;
		cin >> s;
		if (s == "PUSHFRONT") {
			int x;
			cin >> x;
			dq.push_front(x);
		}
		else if (s == "PRINTFRONT") {
			if (!dq.empty()) cout << dq.front();
			else cout << "NONE";
			cout << endl;
		}
		else if (s == "POPFRONT") {
			if (!dq.empty()) dq.pop_front();
		}
		else if (s == "PUSHBACK") {
			int x;
			cin >> x;
			dq.push_back(x);
		}
		else if (s == "PRINTBACK") {
			if (!dq.empty()) cout << dq.back();
			else cout << "NONE";
			cout << endl;
		}
		else {
			if (!dq.empty()) dq.pop_back();
		}
	}
	return 0;
}
