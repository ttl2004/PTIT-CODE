#include<bits/stdc++.h>
#define ll long long
#define end '\n'
#define pb push_back
using namespace std;
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
ll C1(ll k, ll n) {
    ll C[40 + 1][40 + 1];
    for(ll i = 0; i <= n; i++){
        for(ll j = 0; j <= min(i, k); j++){
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
    return C[n][k];
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
    int T;
    cin >> T;
    while(T--){
		  int m, n;
		  cin >> m >> n;
		  int a[m + 5][n + 5];
		  for(int i = 0; i < m ; i++)
		  	for(int j = 0; j < n; j++)
		  		cin >> a[i][j];
		  cout << C1(n - 1, m - 1 + n -1) << endl;
    }

    return 0;
}