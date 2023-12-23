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
        ll a[n + 5][n + 5];
        for (int i = 0;  i < n; i++){
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
            if (i == 0 || i == n - 1) cout << a[i][j];
            else if (j == 0 || j == n - 1) cout << a[i][j];
            else cout << " ";
            cout << " ";
        }
        cout << endl;
    }
    }
    return 0;
}