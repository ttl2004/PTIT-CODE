#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;
ll bcn(ll a, ll b) {
	return (a*b)/__gcd(a, b);;
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t; 
    cin >> t;
    while (t--) {
    	ll n; 
    	cin >> n;
    	ll f = 1;
    	for (ll i = 2; i <= n; i++) f = bcn(f, i);
    	cout << f << endl;
    }
	return 0;
}