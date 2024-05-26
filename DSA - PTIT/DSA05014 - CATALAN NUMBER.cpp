#include <bits/stdc++.h>
#define __Tieu_Long__ int main()
#define Start {
#define Finish }
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
const ll maxN = 1e3 + 5;
ll dp[maxN + 5];
void rev(char a[]){
	int n=strlen(a);
	for(int i=0; i<n/2; i++){
		char t=a[i];
		a[i]=a[n-i-1];
		a[n-1-i]=t;
	}
}
string tich(char a2[], char b2[]) {
	string res;
	int n = strlen(a2), m = strlen(b2);
	rev(a2); rev(b2);
	int k = m  + n + 5;//k=10
	int x[1005], y[1005], z[k];
	for (int i = 0; i < k; i ++) z[i] = 0;
	for (int i = 0; i < n; i ++) {
		x[i] = a2[i] - '0';
	}
    for (int i = 0; i < m; i ++) y[i] = b2[i] -'0';
	for( int i = 0; i < m; i ++) {
		int j, nho = 0;
		for (j = 0; j < n; j ++) {
			int temp = x[j] * y[i] + nho + z[i + j];
			z[i + j] = temp % 10;
			nho = temp / 10;
		}	
		if (nho) z[i + j] = nho;
	}
	while (k > 1 && z[k - 1] == 0) k --;//xoa so 0
	for(int i=k-1; i>=0; i--) res += z[i];
	return res;
}
void Sang() {
	dp[0] = 1; dp[1] = 1;
	for (ll n = 2; n <= 101; n ++) {
		for (ll i = 0; i < n; i ++) {
			dp[n] += dp[i] * dp[n - 1 - i];
		}
	}
}

__Tieu_Long__ Start
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	Sang();
	int t;
	cin >> t;
	while (t --) {
		ll n;
		cin >> n;
		cout << dp[n] << endl;
	}
	return 0;
Finish
