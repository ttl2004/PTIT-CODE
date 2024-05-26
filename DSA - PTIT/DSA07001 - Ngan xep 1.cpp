#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
#define fi first
#define se second
using namespace std;

int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	string s;
	vector<string>  st;
	while (cin >> s) {
	      if (s == "push") {
	            string x;
	            cin >> x;
	            st.pb(x);
	      }
	      else {
	            if (s == "show") {
	                 if (st.size() == 0) cout << "empty";
	                 else for (auto x : st) cout << x << " ";
	                 cout << endl;
	            }
	            else if (s == "pop")  if (st.size() != 0) st.pop_back();
	      }
	}
	return 0;
}