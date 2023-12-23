#include<bits/stdc++.h>
#define ll long long
using namespace std;
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
int check(string s) {
	if(s.size() == 1 and s == "9") return 1;
	if(s.size() == 1 and s != "9") return 0;
	int sum = 0;
	for (auto x : s) {
		sum += x - '0';
	}
	return check(to_string(sum));
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		if (check(s) == 1) cout << 1;
		else cout << 0;
		cout << endl;
	}

	return 0;
}
