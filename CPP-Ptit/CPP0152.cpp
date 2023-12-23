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
    	int a, m;
    	cin >> a >> m;
    	int kt = 0;
    	for (int i = 0; i < m; i++) {
    		if ((i*a) % m == 1){
    			cout << i;
    			kt = 1;
    			break;
    		}
    	}
    	if (!kt) cout << "-1";
    	cout << endl;
    }
	return 0;
}