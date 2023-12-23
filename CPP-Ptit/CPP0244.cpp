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
    ll a[n + 5], _max = -1e9;
    map<int, int> cnt;
    for (int i = 0; i < n; i++){
    	cin >> a[i];
    	_max = max(_max, a[i]);
    	cnt[a[i]]++;
    }
    for (int i = 0; i <= _max; i++){
    	if (cnt[i] > 0) cout << i << " ";
    }
	return 0;
}