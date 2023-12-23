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
    	string s;
    	cin >> s;
    	ll kq = 0;
    	for (char x : s) {
    		kq = kq*2 + (x - '0');
    		kq %= 5;
    	}
    	if (kq == 0) cout << "Yes\n";
    	else cout << "No\n";
    }
	return 0;
}