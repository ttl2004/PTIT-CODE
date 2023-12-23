#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;
int check[1000005];
void sang() {
	for (int i = 1; i < 1000005; i++) check[i] = i;
	for (int i = 2; i*i <= 1000005; i++) {
		if (check[i]) {
			for (int j = i*i; j <= 1000005; j += i){
				if(check[j] == j) check[j] = i;
			}
		}
	}
}
void pt(int n) {
	while (n != 1) {
		int cnt = 0, temp = check[n];
		while (n % temp == 0) {
			cnt++;
			n /= temp;
		}
		cout << temp << " " << cnt << " ";
	}
}
int main() {
	int t;
	cin >> t;
	sang();
	while (t--){
		int n;
		cin >> n;
		pt(n);
		cout << endl;
	}
	return 0;
}