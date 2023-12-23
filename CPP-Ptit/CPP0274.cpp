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
    	int n;
	    cin >> n;
	    map<int, int> cnt;
	    for (int i = 0; i < n; ++i) {
	        int x;
	        cin >> x;
	        cnt[x]++;
	    }
	    int dem = 0;
	    for (auto x : cnt) {
	        if (x.second > 1)
	            dem += x.second;
	    }
	    cout << dem << endl;
    }
	return 0;
}