#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	//deo huy chuong
	//khong truot phat nao
	ll t;
	cin>>t;
	while(t--){
		ll a,m;
	    cin >> a >> m;
	    ll kt = 0; 
	    for(ll i=1; i<m; i++){ 
	        if ((i*i)%m == 1){
	            ll tmp = i + m * (a/m); 
	            if (tmp > a) 
	                tmp -= m; 
	            kt += ((tmp-i)/m + 1); 
	        } 
	    } 
	    cout << kt << endl;
	}
    return 0;
} 