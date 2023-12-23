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
    	ll n, k;
    	cin >> n >> k;
    	ll f = 0;
    	for (int  i = 1; i <= n; i++) f += i%k;
    	cout << (f == k) ? 1 : 0;
    	cout << endl;
    }
	return 0;
}