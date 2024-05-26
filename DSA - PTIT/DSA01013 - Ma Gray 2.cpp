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
	while (t --) {
		// dung cong XOR
		/*
			xâu gray, binary
			binary[0] = gray[0]
			các ký tự từ 1 -> gray.length() - 1 sẽ được chuyển thành bít nhị phân theo cách sau:
			if (gray[i] == 1) XOR(gray[i], binary[i - 1])
			else binary += binary[i - 1];
			note:
			XOR(0, 0) = 0;
			XOR(0, 1) = 1;
			XOR(1, 0) = 1;
			XOR(1, 1) = 0;
		*/
		string gray;
		string binary;
		cin >> gray;
		binary += gray[0];
		for (int i = 1; i < gray.length(); i ++) {
			if (gray[i] == '1') {
				binary += (binary[i - 1] == '0' ? '1' : '0');
			}
			else binary += binary[i - 1];
		}
		cout << binary << endl;
	}
	return 0;
}
