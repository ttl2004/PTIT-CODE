#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;
string ma1 = "A B B A D C C A B D C C A B D";
string ma2 = "A C C A B C D D B B C D D B B";

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		cin.ignore();
		string s;
		getline(cin, s);
		int cnt = 0;
		if(n == 101){
			int len = s.size();
			for (int i = 0; i < len; i++) {
				if(s[i] == ' ' && ma1[i] == ' ') continue;
				else if(s[i] == ma1[i]) cnt++;
			}
		}
		else{
			int len = s.size();
			for (int i = 0; i < len; i++) {
				if(s[i] == ' ' && ma2[i] == ' ') continue;
				else if(s[i] == ma2[i]) cnt++;
			}
		}
		double k = (double)10/15;
		double kq = (double)k*cnt;
		cout << fixed << setprecision(2) << kq <<"\n"; 
	}
	return 0;
}