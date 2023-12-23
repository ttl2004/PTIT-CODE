#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;
ll check(string s) {
	int le = 0, chan = 0;
	for (char c : s) {
		if ((c - '0') % 2 == 0) chan++;
		else le++;
	}
	return (chan == le) ? 1 : 0;
}
int main() {
	int n;
	cin >> n;
	int a = pow(10, n - 1), b = pow(10, n), dem = 0;
	for (int i = a; i < b; i++){
		if (check(to_string(i))){
			dem++;
			cout << i << " ";
		}
		if(dem % 10 == 0) cout << endl;
	}
	return 0;
}