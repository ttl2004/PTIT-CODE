#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;
ll check(ll n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++) if (n % i == 0) return 0;
	return 1;
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t; 
    cin >> t;
    while (t--) {
    	int n; 
    	cin >> n;
    	for (int i = 2; i <= sqrt(n); i++){
    		if (check(i)) cout << i*i << " ";
    	}
    	cout << endl;
    }
	return 0;
}