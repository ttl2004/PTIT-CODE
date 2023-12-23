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
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
   	cin >> t;
   	while (t--) {
   		/*
   		y tuong: dung tim kiem nhi phan de tim vi tri so lon hon x trong mang b[i] da sort tang dan
   		
   		ta luon thay x^y > y^x khi x < y va se co 1 so truong hop dac biet nhu o duoi
   		*/
   		int n, m;
   		cin >> n >> m;
   		int a[n + 5], b[n + 5], count[5] = {0};
   		for (int i = 0; i < n; i ++) {
   			cin >> a[i];
		}
		for (int i = 0; i < m; i ++) {
			cin >> b[i];
			if (b[i] < 5) count[b[i]]++;
		}
		sort (b, b + m);
		int cnt = 0;
		for (int i = 0; i < n; i ++) {
			// xuly cac truong hop a[i] > 1
			if (a[i] > 1) {
				int idx = upper_bound(b, b + m, a[i]) - b;
				cnt += m - idx;
				cnt += (count[1] + count[0]); // voi moi a[i] > 1 thì a[i]^1 > 1^a[i] và a[i]^0 > 0^a[i] nên chi can cong so luong so 0 va 1 trong mang b[i]
				if (a[i] == 2) {
					cnt -= (count[3] + count[4]); //do 2^3 < 3^2 va 2^4 == 4^2  nen chi can tru so luong so 3 va 4 o mang b[i]
				}
				if (a[i] == 3) cnt += count[2];  //do 3^2 > 2^3 nen chi can cong so luong so 2 o mang b[i]
			}
			//xuly truong hop a[i] == 1, do 1^0 > 0^1 nen chi can cong so luong so 0 o mang b[i]
			if (a[i] == 1) {
				cnt += count[0];
			}
		}
		cout << cnt << endl;
 	}

	return 0;
}
