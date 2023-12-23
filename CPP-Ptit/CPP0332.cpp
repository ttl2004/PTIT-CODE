#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    string s, x;
    getline(cin, s);
    vector<string> str;
    stringstream ss(s);
    while (ss >> x) {
    	str.pb(x);
    }
    string s1;
	s1 = str[str.size() - 1];
    for(int i = 0; i < s1.size(); i++) {
    	s1[i] = tolower(s1[i]);
    }
    cout << s1;
    for (int i = 0; i < str.size() - 1; i++) printf("%c", tolower(str[i][0]));
    printf("@ptit.edu.vn");
	return 0;
}