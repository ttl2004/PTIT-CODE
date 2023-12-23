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
    	ll a[n + 5];
        map<int, int> cnt;
    	for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] >= 0) cnt[a[i]]++;
        }
        for (int i = 1; i <= 1e6 + 5; i++){
            if(cnt[i] == 0){
                cout << i << endl;
                break;
            }
        }
    	
    }
	return 0;
}