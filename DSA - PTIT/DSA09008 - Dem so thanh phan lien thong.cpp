#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
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
vector<int> adj[1005];
bool visited[1005];

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (!visited[v]) {
                q.push(v);
                visited[v] = true;
            }
        }
    }
}

int main() {
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
    int t;
    cin >> t;
    while (t --) {
    	int N, M;
	    cin >> N >> M;
	    for (int i = 0; i < M; ++i) {
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	        adj[v].push_back(u);
	    }
	    int cnt = 0;
	    for (int i = 1; i <= N; ++i) {
	        if (!visited[i]) {
	            cnt++;
	            bfs(i);
	        }
	    }
	    cout << cnt << endl;
	    for (int i = 0; i <= 1004; i ++) adj[i].clear();
	    memset(visited, false, sizeof(visited));
	}

    return 0;
}