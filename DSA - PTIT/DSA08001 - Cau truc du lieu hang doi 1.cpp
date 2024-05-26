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
		int q;
		cin >> q;
		queue<int> qe;
		while (q --) {
			int x;
			cin >> x;
			switch (x){
				case 1:
					cout << qe.size() << endl;
					break;
				case 2:
					cout << ((qe.empty() ? "YES\n" : "NO\n"));
					break;
				case 3:
					int f;
					cin >> f;
					qe.push(f);
					break;
				case 4:
					if (!qe.empty()) qe.pop();
					break;
				case 5:
					if (qe.empty()) cout <<"-1\n";
					else cout << qe.front() << endl;
					break;
				case 6:
					if (qe.empty()) cout <<"-1\n";
					else cout << qe.back() << endl;
					break;
			}
		}
	}
	return 0;
}
