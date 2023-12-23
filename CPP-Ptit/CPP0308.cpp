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
	    map<char, int> cnt;
	    for (char x : s) {
	        cnt[x]++;
	    }
	    for (char x : s) {
	        if (cnt[x] == 1) cout << x;
	    }
	    cout <<  endl;
    }
	return 0;
}