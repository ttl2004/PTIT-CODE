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
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            int d = 0;
            while (n % i == 0) {
                d++;
                n /= i;
            }
            cout << i << " " << d << endl;
        }
        if (n == i)
            break;
    }
    if (n > 1)
        cout << n << " 1\n";
	return 0;
}