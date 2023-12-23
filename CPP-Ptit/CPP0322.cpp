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
void add(string a, string b) {
	int len = max(a.size(), b.size());
	while (a.size() < len) a = "0" + a;
	while (b.size() < len) b = "0" + b;
	int z[10005];
	int du = 0, k = 0;
	reverse(begin(a), end(a));
	reverse(begin(b), end(b));
	for (int i = 0; i < len ; i++) {
		int temp = (a[i] - '0') + (b[i] - '0') + du;
		z[k++]=temp%10;
		du=temp/10;
	}
	if (du == 1) {
		z[k++] = du;
	}
	k -= 1;
	while (k > 0 && z[k] == 0) k--;
	for (int i = k; i >= 0; i--) {
		cout << z[i];
	}
	cout <<endl;
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string a, b;
		cin >> a >> b;
		add(a, b);
	}

	return 0;
}
