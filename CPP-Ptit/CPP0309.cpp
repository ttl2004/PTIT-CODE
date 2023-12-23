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
    cin.ignore();
    while (t--) {
    	string str, s;
	    getline(cin, str);
	    int cnt = 0;
	    stringstream ss(str);
	    while (ss >> s) cnt++;
	    cout << cnt << endl;
    }
	return 0;
}