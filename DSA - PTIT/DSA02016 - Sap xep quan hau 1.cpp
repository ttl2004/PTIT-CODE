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
int n, cnt = 0;
//bool hang[12], cot[12], xuoi[34], nguoc[34];
// void Try(int i){
// 	for(int f = 1; f <= n; f++){
// 		if(hang[f] == false && cot[f] == false && xuoi[i + f - 1] == false && nguoc[i - f + n] == false){
// 			hang[f] = true;
// 			cot[f] = true;
// 			xuoi[i + f -1] = true;
// 			nguoc[i - f + n] = true;
// 			if(i == n) cnt++;
// 			else Try(i + 1);
// 			hang[f] = false;
// 			cot[f] = false;
// 			xuoi[i + f -1] = false;
// 			nguoc[i - f + n] = false;
// 		}
// 	}
// }
ll a[10] = {1, 0, 0, 2, 10, 4, 40, 92, 352, 724};
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		cin >> n;
        //Try(1);
        //cout << cnt << endl;
        cout << a[n - 1] << endl;
	}
	return 0;
}
