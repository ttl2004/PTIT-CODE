#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
#define fi first
#define se second
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
ll xuly(string b) {
	stringstream ss(b);
	ll f;
	ss >> f;
	return f;
}
string chiadu(string a, string b){
	int len = b.size();
	ll res = 0;
	ll f = xuly(a);
	for (int i = 0; i < len; i ++) {
	   	res = res*10 + (b[i] - '0');
	   	res %= f;
	}
	return to_string(res);
}

string ucln(string a, string b){
	if (b == "0") return a;
	return ucln(b, chiadu(b,a));
}
int main() {
    ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
       	cout << ucln(b, a) << endl;
	    
    }
    return 0;
}

