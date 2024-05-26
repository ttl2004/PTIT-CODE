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
void dfs(int u, int t, vector<vector<int>>& graph, vector<bool>& visited, vector<int>& path) {
    visited[u] = true;
    path.push_back(u);

    if (u == t) {
        // Đã đến được đỉnh đích, in đường đi
        for (int vertex : path) {
            cout << vertex << " ";
        }
        cout << endl;
        return;
    }

    for (int v : graph[u]) {
        if (!visited[v]) {
            dfs(v, t, graph, visited, path);
        }
    }

    // Backtrack khi không tìm thấy đường đi từ u đến t
    path.pop_back();
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int V, E, s, t;
        cin >> V >> E >> s >> t;
        vector<vector<int>> graph(V + 1);
        vector<bool> visited(V + 1, false);
        vector<int> path;
        for (int i = 0; i < E; ++i) {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        dfs(s, t, graph, visited, path);
        if (!visited[t]) {
            cout << "-1" << endl;
        }
	}
	return 0;
}
