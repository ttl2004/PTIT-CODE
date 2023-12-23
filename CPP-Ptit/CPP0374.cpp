#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'

using namespace std;
/*
                       _oo0oo_
                      o8888888o
                      88" . "88
                      (| -_- |)
                      0\  =  /0
                    ___/`---'\___
                  .' \\|     |// '.
                 / \\|||  :  |||// \
                / _||||| -:- |||||- \
               |   | \\\  -  /// |   |
               | \_|  ''\---/''  |_/ |
               \  .-\__  '-'  ___/-. /
             ___'. .'  /--.--\  `. .'___
          ."" '<  `.___\_<|>_/___.' >' "".
         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
         \  \ `_.   \_ __\ /__ _/   .-` /  /
     =====`-.____`.___ \_____/___.-`___.-'=====
                       `=---='
*/
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin >> s;
	int n = s.size();
    ll cntA[1000006] = {0}; 
    ll cntB[1000006] = {0};
    if(s[0]=='B') cntA[0]++;
    else cntB[0]++;
    for(ll i=1; i<n; i++){
        if(s[i]=='A'){
            cntA[i]=cntA[i-1];
            cntB[i]=min(cntA[i-1] , cntB[i-1])+1;
        }
        else{
            cntA[i]=min(cntA[i-1] , cntB[i-1])+1;
            cntB[i]=cntB[i-1]; 
        }
    }
    cout<<cntA[n-1];
   
    return 0;
	

	return 0;
}
//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
