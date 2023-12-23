#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;
ll check(string s) {
	ll n = s.size();;
	for (int i = 0; i < n / 2; i++) {
		if (s[i] != s[n - 1 - i]) return 0;
	}
	return 1;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		if (check(s)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}