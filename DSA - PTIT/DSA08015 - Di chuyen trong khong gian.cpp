#include <bits/stdc++.h>
#define __Tieu_Long__ int main()
#define Fast(); ios_base :: sync_with_stdio (0); cin.tie(0); cout.tie(0);
#define Tests() int t; cin >> t; while (t --)
#define Test() int t = 1; while (t --)
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
pair<pair<int, int>, int> xyz[6] = {{{1, 0}, 0}, {{0, -1}, 0}, {{0, 0}, 1}, {{-1, 0}, 0}, {{0, 1}, 0}, {{0, 0}, -1}};
int a, b, c, kt[50][50][50];
char s[35][35][35];
struct tt{
	int x, y, z;
};
void BFS(tt begin, tt end) {
	queue<pair<tt, int>> qe;
	qe.push({begin, 0});
	kt[begin.x][begin.y][begin.z] = 1;
	while (!qe.empty()) {
		pair<tt, int> tmp = qe.front();
		qe.pop();
		if (tmp.fi.x == end.x && tmp.fi.y == end.y && tmp.fi.z == end.z) {
			cout << tmp.se << endl;
			return;
		}
		for (int i = 0; i < 6; i ++) {
			tt ijk;
			ijk.x = tmp.fi.x + xyz[i].fi.fi;
			ijk.y = tmp.fi.y + xyz[i].fi.se;
			ijk.z = tmp.fi.z + xyz[i].se;
			if (kt[ijk.x][ijk.y][ijk.z] == 0 && s[ijk.x][ijk.y][ijk.z] != '#' && ijk.x >= 0 && ijk.x < a && ijk.y >= 0 && ijk.y < b && ijk.z >= 0 && ijk.z < c) {
				qe.push({ijk, tmp.se + 1});
				kt[ijk.x][ijk.y][ijk.z] = 1;
			}
		}
	}
	cout << "-1\n";
}
void solve() {
	memset(kt, 0, sizeof(kt));
	cin >> a >> b >> c;
	tt begin, end;
	for (int i = 0; i < a; i ++) {
		for (int j = 0; j < b; j ++) {
			for (int k = 0; k < c; k ++) {
				cin >> s[i][j][k];
				if (s[i][j][k] == 'S') {
					begin.x = i;
					begin.y = j;
					begin.z = k;
				}
				if (s[i][j][k] == 'E') {
					end.x = i;
					end.y = j;
					end.z = k;
				}
			}
		}
	}
	BFS(begin, end);

}
__Tieu_Long__{
	Fast();
	Tests() {
       solve();
	}
	return 0;
}
