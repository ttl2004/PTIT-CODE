#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;

int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int n, m, p;
    cin >> n >> m >> p;
    int a[n][m], b[m][p];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j)
            cin >> b[i][j];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            int s = 0;
            for (int k = 0; k < m; ++k) {
                s += a[i][k] * b[k][j];
            }
            cout << s << " ";
        }
        cout << endl;
    }
	return 0;
}