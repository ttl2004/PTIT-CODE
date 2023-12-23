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
        int n, m;
        cin >> n >> m;
        ll a[n + 5][m + 5], b[n + 5][m + 5];
        for (int i = 0;  i < n; i++){
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                b[i][j] = a[i][j];
            }
        }

        for (int i = 0;  i < n; i++){
            for (int j = 0; j < m; j++) {
                if(a[i][j] == 1){
                    for (int k = 0; k < n; k++){
                        b[k][j] = 1;
                    }
                    for (int f = 0; f < m; f++){
                        b[i][f] = 1;
                    }
                }
            }
        }
        for (int i = 0;  i < n; i++){
            for (int j = 0; j < m; j++) cout << b[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}