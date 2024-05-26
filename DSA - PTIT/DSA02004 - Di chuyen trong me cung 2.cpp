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
//
#define MAX 8
int ok = 0;
bool kt(int x, int y, int N, vector<vector<int>>& arr, vector<vector<bool>>& visited) {
    return (x >= 0 && x < N && y >= 0 && y < N && arr[x][y] == 1 && !visited[x][y]);
}
void Try(int x, int y, int N, vector<vector<int>>& arr, vector<vector<bool>>& visited, string& kq) {
    if (x == N - 1 && y == N - 1) {
        cout << kq << " ";
        ok = 1;
        return;
    }

    visited[x][y] = true;
	// di chuyen xuong duoi
    if (kt(x + 1, y, N, arr, visited)) {
        kq.push_back('D');
        Try(x + 1, y, N, arr, visited, kq);
        kq.pop_back();
    }
	// di chuyen sang trai
	if (kt(x, y - 1, N, arr, visited)) {
        kq.push_back('L');
        Try(x, y - 1, N, arr, visited, kq);
        kq.pop_back();
    }
    // di chuyen sang phai
    if (kt(x, y + 1, N, arr, visited)) {
        kq.push_back('R');
        Try(x, y + 1, N, arr, visited, kq);
        kq.pop_back();
    }
	// di chuyen len tren
    if (kt(x - 1, y, N, arr, visited)) {
        kq.push_back('U');
        Try(x - 1, y, N, arr, visited, kq);
        kq.pop_back();
    }
    visited[x][y] = false;
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int N;
        cin >> N;
        vector<vector<int>> arr(N, vector<int>(N, 0));
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> arr[i][j];
            }
        }
        vector<vector<bool>> visited(N, vector<bool>(N, false));
        string kq;
        Try(0, 0, N, arr, visited, kq);
        if (ok == 0) {
            cout << "-1";
        }
		ok = 0;
        cout << endl;
	}
	return 0;
}