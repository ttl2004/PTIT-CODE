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
    	ll a, b;
    	cin >> a >> b;
    	cout << (a*b)/__gcd(a, b) <<  " " << __gcd(a, b) << endl;
    } 
	return 0;
}