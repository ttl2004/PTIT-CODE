#include <bits/stdc++.h>
#define __Fast__ ios_base :: sync_with_stdio (0);cin.tie(0);cout.tie(0);
#define __Tests__ int t; cin >> t; while(t --)
#define __Test__ int t = 1; while(t --)
#define __Tieu_Long__ int main()
#define Return return 0;
#define Start {
#define Finish }
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
__Tieu_Long__ Start
	__Fast__
	__Tests__ Start
		int n;
		cin >> n;
		int a[n + 5];
		for (int i = 0; i < n; i ++) cin >> a[i];
		
		stack<int> stk;
		for (int i = 0; i < n; i ++) {
			while (!stk.empty() && a[i] >= a[stk.top()]) stk.pop();
			if (stk.empty()) cout << i + 1 << " ";
			else cout << i - stk.top() << " "; 
			stk.push(i);
		}
		cout << endl;
	Finish
	Return
Finish
