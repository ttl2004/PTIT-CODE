#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
#define fi first
#define se second
#define F for
#define W while

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
// int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
// int dy[8] = {1, 0, -1, -1, -1, 0, 1, 1};
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int kt[1005][1005];
vector<pair<int,int>> vt; //lưu các toạ độ thuộc 1 miền 
bool ktr = false; /*kiểm tra xem các toạ trong 1 miền có toạ độ nào không được bao quanh bởi X,
                    true là miền đó không bao quanh bởi X , false là miền đó có bao quanh bởi X
*/ 
//Hàm kiểm tra xem toạ độ đó làm cho miền đang xét thoả mãn đkiên đề bài ko
bool check(int i, int j, int n, int m) {
    if (i == 0 || j == 0 || i == n - 1 || j == m - 1) return true;
    else return false;
}
// Dùng thuật toán BFS để tìm miền
void bfs(vector<vector<char>> a, int n, int m, int i, int j) {
    queue<pair<int,int>> qe;
    qe.push({i, j});
    kt[i][j] = 1;
    vt.pb({i, j}); //lưu toạ độ vào vector
    ktr  = check(i, j, n , m);
    while (!qe.empty()) {
        pair<int, int> u = qe.front();
        qe.pop();
        for (int i = 0; i < 4; i ++) {
            int x = u.fi + dx[i];
            int y = u.se + dy[i];
            if (kt[x][y] == 0 && x >= 0 && y >= 0 && x < n && y < m && a[x][y] == 'O') {
                kt[x][y] = 1;
                qe.push({x, y});
                vt.pb({x, y});// lưu toạ độ vào vector
                if (ktr == false) {
                    ktr = check(x, y, n , m);
                }
            }
        }
    }
}
int main() {
    ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    // 1 và 0 là vị trí đó chuyển dc thành X, còn 2 thì không chuyển được thành X
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        memset(kt, 0, sizeof(kt)); // khởi tạo ma trận kt toàn gtri 0
        vector<vector<char>> a(n + 5, vector<char>(m + 5));
        for (int i = 0; i < n; i ++) {
            for (int j = 0; j < m; j ++) cin >> a[i][j];
        }
        int cnt = 0;
        for (int i = 0; i < n ; i ++) {
            for (int j = 0; j < m; j ++) {
                if (a[i][j] == 'O' && kt[i][j] == 0) {
                    bfs(a, n, m, i , j);
                    if (ktr == true) {
                        //Đánh dấu các toạ độ trong miền vừa tìm được là 2 do miền đó không chuyển dc  tất cả thành X
                        for (auto x : vt) {
                            kt[x.fi][x.se] = 2;
                        }
                    }
                    ktr = false; // reset biến để dùng cho miền tiếp theo
                    vt.clear(); // reset vector để lưu các toạ độ thuộc miền tiếp theo
                }
            }
        }
        for (int i = 0; i < n; i ++) {
            for (int j = 0; j < m; j ++) {
                if (kt[i][j] == 0 || kt[i][j] == 1) cout << "X ";
                else cout << "O "; 
            }
            cout << endl;
        }
    }
    return 0;
}