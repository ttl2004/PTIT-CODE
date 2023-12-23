#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;

int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    map<string, int> cnt;
    cin.ignore();
    while (n--) {
    	string s;
    	getline(cin, s);
    	cnt[s]++;
    }
    cout << cnt.size();
	return 0;
}