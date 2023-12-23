#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	//deo huy chuong
	//khong truot phat nao
	ll t;
	cin>>t;
	while(t--){
		ll n, k, s=0;
		cin>>n>>k;
		for(ll i=1; i<=n; i++) s+=i%k;
		cout<<s<<endl;
	}
    return 0;
} 