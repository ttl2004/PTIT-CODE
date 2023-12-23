#include<bits/stdc++.h>
#define ll long long
using namespace std;
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n ; 
		cin >> n; 
		string A[n + 5]; 
		for(int i = 0 ; i < n ; i++) 
		cin >> A[i]; 
		sort(A, A + n,[](string a, string b){ 
			return a+b > b+a; 
		}); 
		for (auto x : A) cout << x; 
		cout<<endl; 
		
	}

	return 0;
}


