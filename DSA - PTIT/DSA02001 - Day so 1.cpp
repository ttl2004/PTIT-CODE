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
    	cin >> n;
    	vector<ll> a, b;
    	cout << "[";
    	for(ll i = 0; i < n; i++){
    		ll x;
    		cin >> x;
    		cout << x;
    		if(i != n-1) cout <<" ";
    		a.pb(x);
		}
	cout << "]\n";
    	while(a.size() > 1){
    		ll m = a.size();
    		cout << "[";
    		for(ll i = 1; i < m  ; i++){
    			cout << a[i] + a[i - 1];
    			b.pb(a[i] + a[i - 1]);
    			if(i != m-1) cout << " ";
			}
			cout << "]\n";
			a = b;
			b.clear();
		}
    	
	}
}