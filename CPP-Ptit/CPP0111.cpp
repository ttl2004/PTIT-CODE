#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;
ll check(string s){
	int len = s.size();
	for (int i = 1; i < len; i++){
		if (abs(s[i] - s[i - 1]) != 1) return 0;
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