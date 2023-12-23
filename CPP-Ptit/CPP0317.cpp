#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;
ll check(string s) {
	ll len = s.size(), kt = 0;
	for (int i = 0; i < len/2; i++){
		if (s[i] == s[len - 1 - i] && (s[i] - '0') % 2 == 0){
			kt = 1;
		}
		else{
			kt =  0;
			break;
		}
	}
	return (kt == 1) ? 1 : 0;
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    while (n--) {
    	string s;
    	cin >> s;
    	if (check(s)) cout << "YES\n";
    	else cout << "NO\n";
    }
	return 0;
}