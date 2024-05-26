#include <bits/stdc++.h>
#define __Tieu_Long__ int main()
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

__Tieu_Long__{
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t --) {
		/* Hướng dẫn: tìm dãy con tăng dần dài nhất (không cần liên tiếp) mà trị tuyệt đối giữa hai ptu liên tiếp là 1
			ví dụ: 
			5
			4 1 2 5 3
			-> tìm dc dãy con thoả mãn là 1 2 3 có độ dài là 3
			=> kết quả số lần dịch chuyển là n - 3 = 5 - 3
			*Cách dịch chuyển: 4 1 2 5 3 -> 1 2 5 3 4 -> 1 2 3 4 5
		*/
		int n;
		cin >> n;
		int dp[n + 5] = {}, max_ = 0;
		for (int i = 0; i < n; i ++) {
			int x;
			cin >> x;
			dp[x] = max(dp[x - 1] + 1, 1);
			max_ = max(max_, dp[x]);
		}
		cout << n - max_;
	}
	return 0;
}
