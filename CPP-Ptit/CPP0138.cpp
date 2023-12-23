#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;
int check[1000005];
void sang() {
	for (int i = 1; i <= 1000005; i++) check[i] = 1;
	check[0] = check[1] = 0;
	for (int i = 2; i*i <= 1000005; i++) {
		if (check[i]) {
			for (int j = i*i; j <= 1000005; j += i){
				check[j] = 0;
			}
		}
	}
}
void xuly(){
	int n;
	cin >> n;
	for (int i = 2; i <= n/2; i++){
		if (check[i] && check[n - i]){
			cout << i << " " << n-i << endl;
			return;
		}
	}
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    sang();
    int t; 
    cin >> t;
    while (t--) {
    	xuly();
    }
	return 0;
}