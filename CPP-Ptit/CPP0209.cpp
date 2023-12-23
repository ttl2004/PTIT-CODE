#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t; 
    cin >> t;
    while (t--) {
    	int n, k;
    	cin >> n >> k;
    	ll a[n + 5], d[n + 5] = {};
        d[0] = 0;
    	for (int i = 1; i <= n; i++) {
            cin >> a[i];
            d[i] = d[i - 1] + a[i];
        }
        while (k--){
            int l, r;
            cin >> l >> r;
            cout << d[r] - d[l - 1] << endl; 
        }
    	
    }
	return 0;
}