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
vector<int> check(1e6+5, 1);
void sang() {
	check[0] = check[1] = 0;
	for (int i = 2; i*i <= 1e6 + 5; i++) {
		if (check[i]) {
			for (int j = i*i; j <= 1e6 + 5; j+=i) {
				check[j] = 0;
			}
		}
	}
}

int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    sang();
    while (t--) {
    	int l, r, cnt = 0;
    	cin >> l >> r;
    	for (int i = l; i <= r; i++) {
    		if (check[i]) cnt++;
    	}
    	cout << cnt << endl;
    }
	return 0;
}