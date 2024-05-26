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
int n, k, arr[10005], b[10005], cnt = 0;
vector<int> c;
void Try(int i, int j) {
	for (int f = j; f <= n - k + i; f ++) {
		b[i] = f;
		c[i]= arr[b[i]];
		if (i == k) {
			vector<int> tmp;
			tmp = c;
			sort(tmp.begin(), tmp.end());
			if (tmp == c) cnt ++;
		}
		else Try(i + 1, f + 1);
	}
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	for (int i = 1; i <= n; i ++) cin >> arr[i];
	c.resize(k + 1);
	Try(1, 1);
	cout << cnt;
	return 0;
}
