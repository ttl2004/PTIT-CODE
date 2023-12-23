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
    	int kq = 0;
    	for (char x : s) {
    		kq = kq*10 + (x - '0');
    		kq %= 11;
    	}
    	if (kq == 0) cout << "1\n";
    	else cout << "0\n";
    }
	return 0;
}