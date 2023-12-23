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
    	ll a[n + 5];
    	for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
    	for (int i = 0; i < n; i++) {
            cout << a[(i + k) % n] << " ";
        }
        cout << endl;
    }
	return 0;
}