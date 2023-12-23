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
	int t;
	cin >> t;
	while (t--) {
		string s1;
		cin >> s1;
		int len_1 = s1.size();
		map<char, int> mp;
		int len = 0;
		for (int i = 0; i < len_1; i ++) {
			if (mp[s1[i]] == 0){
				len ++;
				mp[s1[i]]++;
			}
		}
		int cnt_1[26]={}, mim_len = 1e9, cnt = 0, l=0;
		 for(int i=0; i < len_1; i++) {
	        cnt_1[s1[i] - 'a']++;
	        if (cnt_1[s1[i] - 'a']==1) cnt++;
	        if (cnt == len) {
	            while (cnt_1[s1[l] - 'a']>1) {
	                if(cnt_1[s1[l] - 'a']>1) 
						cnt_1[s1[l] - 'a']--;
	                l++;
	            }
	            int s = i - l + 1;
	            if(mim_len > s) {
	                mim_len = s;
	            }
	        }
	    }
	    cout << mim_len << endl;
		//for (auto x: str) cout << x.first << " - " << x.second << endl;
	}
	
	return 0;
}

//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
