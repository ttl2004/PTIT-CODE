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
/*
Ý tưởng:
- Sử dụng mảng cộng dồn d[] để lưu số lượng số <= k của dãy từ 1 -> vị trí i đang xét;
- Sau khi  sắp các số <= k cạnh nhau thì ta sẽ thu được 1 dãy con gồm các phần tử liên tiếp có gtri <= k và 
có độ dài  là h = số lượng gtri <= k trong mảng a[]
- Do đó chỉ cần duyệt các dãy con liên tiếp có độ dài là h và kiểm tra xem trong dãy con đó
có bn số <= k là f,  sau đó sẽ lấy h - f là số lần thực hiện phép đổi chỗ  và tìm min
TEST:
n =	7, k = 5;
i:    0 1  2  3  4  5  6  7
a[]:	2  7  9  5  8  7  4
d[]:  0 1  1  1  2  2  2  3	
*/
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		ll n, k;
		cin >> n >> k;
		ll a[n + 5], d[n + 5] = {0}, h = 0;
		d[0] = 0;
		for (ll i = 1; i <= n ; i ++) {
			cin >> a[i];
			if (a[i] <= k) {
				h ++;
				d[i] = 1;
				d[i] = d[i] + d[i - 1];
			}
			else {
				d[i] = d[i - 1];
			}
		}
		ll _min = 1e9;
		for (ll i = h; i <= n; i ++) {
			ll f = d[i] - d[i - h];
			_min = min(_min, h - f);
		} 
		cout <<  _min << endl;
	}

	return 0;
}
