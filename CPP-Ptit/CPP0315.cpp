#include<bits/stdc++.h>
#define ll long long
using namespace std;
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int len = s.size();
		int i = len - 2, j = len - 1;
		while (i >= 0 and s[i] <= s[i + 1]) i--;
		if (i < 0) cout << "-1\n";
		else {
			while (s[j] >= s[i]) j--;
			while (s[j] == s[j - 1]) j--;
			swap(s[i], s[j]);
			cout << s << endl;
		}
	}

	return 0;
}
