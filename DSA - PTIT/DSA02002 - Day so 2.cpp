#include<bits/stdc++.h>
#define ll long long
#define end '\n'
#define pb push_back
using namespace std;
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
int main(){
	ios_base :: sync_with_stdio (0); cin.tie(0); cout.tie(0);
    //VIET CODE TAI DAY
    int t;
    cin >>t;
    while(t--){
    	ll n;
    	string s;
    	cin >> n;
    	vector<ll> a, b;
    	vector<string> str;
    	s += "[";
    	for(ll i = 0; i < n; i++){
    		ll x;
    		cin >> x;
    		s += to_string(x);
    		if(i != n-1) s += " ";
    		a.pb(x);
		}
		s += "]";
		str.pb(s);
		s.clear();
    	while(a.size() > 1){
    		ll m = a.size();
    		s += "[";
    		for(ll i = 1; i < m  ; i++){
    			s += to_string(a[i] + a[i - 1]);
    			b.pb(a[i] + a[i - 1]);
    			if(i != m-1) s += " ";
			}
			s += "]";
			str.pb(s);
			s.clear();
			a = b;
			b.clear();
		}
    	for (int i = str.size() - 1; i >= 0; i --) cout << str[i] << " ";
    	cout << endl;
	}
}