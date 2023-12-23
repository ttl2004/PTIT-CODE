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
    	int n;
    	cin >> n;
    	ll a[n + 5];
    	for (int i = 0; i < n; i++) cin >> a[i];
    	sort(a, a + n);
    	ll _min = 1e18;
    	for (int i = 1; i < n; i++) {
    		_min = min(_min, a[i] - a[i -1]);
    	}
    	cout << _min << endl;
    }
	return 0;
}