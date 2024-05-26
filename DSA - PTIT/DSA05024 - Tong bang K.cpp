#include <bits/stdc++.h>
#define __Fast__ ios_base :: sync_with_stdio (0);cin.tie(0);cout.tie(0);
#define __Tests__ int t; cin >> t; while(t --)
#define __Test__ int t = 1; while(t --)
#define __Tieu_Long__ int main()
#define Return return 0;
#define Start {
#define Finish }
#define ll long long
#define pb push_back
#define endl '\n'
#define fi first
#define se second
using namespace std;
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
const int mod = 1e9 + 7;
__Tieu_Long__ Start
	__Fast__
	__Tests__ Start
		int n, k;
		cin >> n >> k;
		int a[n + 5], dp[k + 5] = {};
		dp[0] = 1;
		for (int i = 0 ; i < n; i ++) cin >> a[i];
		for (int i = 1; i <= k; i ++) {
			for (int j = 0; j < n; j ++) {
				if (a[j] <= i) {
					dp[i] += dp[i - a[j]];
					dp[i] %= mod;
				}
			}
		}
		cout << dp[k] << endl;
	Finish
	Return
Finish
