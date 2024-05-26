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
    	int count_4 = 0;
    	int count_7 = 0;
    	bool ok = true;
    	while (1) {
    		if (n % 7 == 0) {
    			count_7 += n / 7;
    			break;
    		}
    		if (n >= 4) {
    			count_4 ++;
    			n -= 4;
    		}
    		if (n < 4) {
    			if (n != 0) ok = false;
    			break;
    		}
        }
        if (ok) {
    		for (int i = 0; i < count_4; i ++) cout << 4;
    		for(int i = 0; i < count_7; i ++) cout << 7;
    	}
    	else cout << -1;
	    cout << endl;
	}
	return 0;
}