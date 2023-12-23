#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		if(s[s.size() - 1] == '6' && s[s.size() - 2] == '8') cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}