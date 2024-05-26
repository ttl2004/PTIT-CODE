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
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
vector<string> kq;int cnt=1;
void sort(int a[], int n) {
	for (int  i = 0; i < n - 1; i ++) {
		for (int  j = i + 1; j < n; j ++) {
			if(a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	    string s;
	    s += "Buoc ";
	    s += to_string(cnt++);
	    s += ": ";
		for (int k = 0; k < n; k ++) {
		    s += to_string(a[k]);
		    s += " ";
		}
		kq.pb(s);
	}
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int n;
		cin >> n;
		int a[n + 5];
		for (int i = 0; i < n; i ++) {
			cin >> a[i];
		}
		sort(a, n);
	    for(int i=kq.size()-1; i>=0;i--){
	        cout << kq[i] << endl;
	    }
	    kq.clear();
	    cnt=1;
	}
	return 0;
}
