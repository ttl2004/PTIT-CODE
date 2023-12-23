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
void rev(char a[]){
	int n=strlen(a);
	for(int i=0; i<n/2; i++){
		char t=a[i];
		a[i]=a[n-i-1];
		a[n-1-i]=t;
	}
}
string nhan(string a, string b){
	int n1 = a.size(), n2 = b.size();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int k = max(n1,n2);
	char c[2*k];
	for(int i = 0; i < n2+n1; i++) c[i] = '0';
	for(int i = 0; i < n1; i++){
		int nho = 0;
		int j;
		for(j = 0; j < n2; j++){
			int res = (a[i] - '0')*(b[j]-'0')+ nho + (c[i+j]-'0');
			c[i+j] = res%10 + '0';
			nho = res/10;
		}
		if(nho) c[i+j] = nho + '0';
	}
	if(c[n1+n2-1]!='0') c[n1+n2] = '\0';
	else c[n1+n2-1] = '\0';
	int res = strlen(c);
	rev(c);
	string ans = "";
	for(int i = 0; i < res; i++) ans += c[i];
	return ans;
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string a, b;
		ll c;
		cin >> a >> b >> c;
		string kq = nhan(a, b);
		ll res = 0;
		for (auto x : kq) {
			res = res*10 + (x -'0');
			res%=c;
		}
		cout << res << endl;
	}

	return 0;
}
