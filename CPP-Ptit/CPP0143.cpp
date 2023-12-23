#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;
ll fb[93];
void fibo() {
	fb[0] = 0;
	fb[1] = 1;
	for (ll i = 2; i < 93; i++) {
		fb[i] = fb[i - 1] + fb[i - 2];
	}
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    fibo();
    while (t--) {
    	ll n;
    	cin >> n;
    	cout << fb[n] << endl;
    }
	return 0;
}