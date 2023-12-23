#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)  {
    	long long n, k;
	    cin >> n >> k; 
	    vector<int> kq;
	    for (int i = 2; i <= sqrt(n); ++i) {
	        while (n % i == 0) {
	        	kq.pb(i);
	            n /= i;
	        }
	        if (n == 1)
	       	{
	       		break;
	       	}
	    }
	    if (n > 1)
	        kq.pb(n);
	    if (k > kq.size()) cout << "-1";
	    else cout << kq[k-1];
	    cout << endl;
    }
	return 0;
}