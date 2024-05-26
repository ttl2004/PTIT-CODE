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
bool kt(char c) {
    return (c != 'A' && c != 'E');
}
int check(int a[], int n) {
	for (int i = 1; i < n - 1; i ++) {
		if ((char)(a[i] + 'A') == 'A' or (char)(a[i] + 'A') == 'E') {
			if (kt((char)(a[i - 1] + 'A')) and kt((char)(a[i + 1] + 'A'))) {
				return 0;
			}
		}
	}
	return 1;
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	char c;
	cin >> c;
	int n = c - 'A' + 1;
	int a[n + 5];
	for (int i = 0; i < n; i ++) a[i] = i;
	do{
		if (check(a, n)) {
			for (int i = 0; i < n; i ++) {
				cout << (char)(a[i] + 'A');
			}
			cout << endl;
		}
	}while (next_permutation(a, a + n));
	return 0;
}
