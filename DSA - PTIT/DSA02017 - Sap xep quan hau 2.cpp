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
int max_value = 0;
int a[100][100];
bool hang[12], cot[12], xuoi[34], nguoc[34];
 void Try(int i, int value){
 	for(int f = 1; f <= 8; f++){
 		if(hang[f] == false && cot[f] == false && xuoi[i + f - 1] == false && nguoc[i - f + 8] == false){
 			hang[f] = true;
 			cot[f] = true;
 			xuoi[i + f -1] = true;
 			nguoc[i - f + 8] = true;
 			value += a[i][f];
 			if(i == 8) {
 				max_value = max(max_value, value);
			}
 			else Try(i + 1, value);
 			hang[f] = false;
 			cot[f] = false;
 			xuoi[i + f -1] = false;
 			nguoc[i - f + 8] = false;
 			value -= a[i][f];
 		}
 	}
 }
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		memset(a, 0, sizeof(a));
		max_value = 0;
		for (int i = 1; i <= 8; i ++) {
			for (int j = 1; j <= 8; j ++) cin >> a[i][j];
		}
        Try(1, 0);
        cout << max_value << endl;
        
	}
	return 0;
}
