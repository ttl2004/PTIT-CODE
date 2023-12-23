#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;
int main() {
    ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t = 1; 
    //cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n + 5][n + 5], cnt = 0;
        for (int i = 0; i < n; ++i) {
            int one = 0, no = 0;
            for (int j = 0; j < 3; ++j) {
                cin >> a[i][j];
                if (a[i][j] == 1) one++;
                else no++;
            }
            if (one > no) cnt++;
        }
        cout << cnt;
    
    }
    return 0;
}