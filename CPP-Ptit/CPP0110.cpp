#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		string s, str;
		cin >> s;
		int len = s.size();
		for (int i = 0; i < len;){
			if (s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4'){
				i += 3;
			}
			else {
				str += s[i];
				i++;
			}
		}
		cout << str << endl;
	}

	return 0;
}