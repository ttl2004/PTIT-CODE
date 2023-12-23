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
void hieu(string x, string y) {
	int len = max(x.length(), y.length());
    while (x.length() < len)
        x = "0" + x;
    while (y.size() < len)
        y = "0" + y;

    if (x < y)
        swap(x, y);
	reverse(x.begin() ,x.end());
	reverse(y.begin(), y.end());
	int z[10005];
	int k = 0, du = 0;
	for(int i = 0; i < len; i++) {
		int temp = (x[i] - '0') - (y[i] - '0') - du;
		if (temp < 0){
			du = 1;
			temp = 10 + temp;
		}
		else du = 0;
		z[k++] = temp;
	}
	for (int i = k - 1; i >= 0; i--) {
		cout << z[i];
	}
	cout << endl;
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string x, y;
		cin >> x >> y;
		hieu(x, y);
	}

	return 0;
}
