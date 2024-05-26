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
string Min(int d, int s) {
    string res(d, '0');
    res[0] = '1';
    s -= 1;
    for (int i = d - 1; i > 0; i--) {
        if (s > 9) {
            res[i] = '9';
            s -= 9;
        }
        else {
            res[i] = s + '0';
            s = 0;
            break;
        }
    }
    if (s > 0) res[0] = s + '1';
    return res;
}

int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int s, d;
		cin >> s >> d;
		if (d == 1 && s == 0) cout << "0\n";
		else if (d * 9 < s || s == 0) cout << "-1\n";
		else {
			cout << Min(d, s) << endl;
		}
	}
	return 0;
}
