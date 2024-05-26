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
int dx[] = {-1,-1,-1,0,0,1,1,1};
int dy[] = {-1,0,1,-1,1,-1,0,1};
int kt[100][100], k, m , n;
char a[100][100];
vector<string> ans;
vector<string> s(100);
void Try(int x, int y,string kq) {
    for (int i = 0; i < k; i ++) {
      if (kq == s[i]) ans.pb(kq);
    }
    for (int i = 0; i < 8; i ++) {
      int xx = x + dx[i];
      int yy = y + dy[i];
      if (xx >= 0 && xx < m && yy >= 0 && yy < n && kt[xx][yy] == 0) {
        kt[xx][yy] = 1;
        Try(xx, yy, kq + a[xx][yy]);
        kt[xx][yy] = 0;
      }
    }
}
__Tieu_Long__{
	Fast();
	Tests() {
    cin >> k >> m >> n;
    for (int i = 0; i < k; i ++) cin >> s[i];
    for (int i = 0; i < m; i ++) {
      for (int j = 0; j < n; j ++) {
        cin >> a[i][j];
      }
    }
    for (int i = 0; i < m; i ++) {
      for (int j = 0; j < n; j ++) {
        memset(kt, 0, sizeof(kt));
        kt[i][j] = 1;
        string str = "";
        Try(i, j, str + a[i][j]);
      }
    }
    if (ans.size() == 0) cout << "-1";
    else for (auto x : ans) cout << x << " ";
    ans.clear();
    s.clear();
    cout << endl;
	}
	return 0;
}