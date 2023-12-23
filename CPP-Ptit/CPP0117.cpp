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
		while (s.size() > 1){
			ll sum = 0;
			for (char c : s) sum += (c -'0');
			s = to_string(sum);
		}
		cout << s <<  endl;
	}
	return 0;
}