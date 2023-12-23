#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;

int main() {
	int t; 
	cin >> t;
	while (t--) {
		ll x, y, z, t;
		cin >> x >> y >> z >> t;
		double kq = sqrt((x - z) * (x - z) + (y - t) * (y - t));
		cout << fixed << setprecision(4) << kq <<"\n";
	}
	return 0;
}