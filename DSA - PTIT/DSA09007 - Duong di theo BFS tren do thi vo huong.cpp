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
int v, e, Begin, End;
int check[2005], truoc[2005];
vector<int> adj[2005];

void BFS(int i) {
    queue<int> qe;
    qe.push(i);
    check[i] = 1;
    while (!qe.empty()) {
        int tmp = qe.front();
        qe.pop();
        if (tmp == End) {
            return;
        }
        for (auto j : adj[tmp]) {
            if (!check[j]) {
                qe.push(j);
                check[j] = 1;
                truoc[j] = tmp;
            }
        }
    }
}
__Tieu_Long__{
    Fast();
    Tests() {
        cin >> v >> e >> Begin >> End;
        for (int i = 1; i <= e; i ++) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        BFS(Begin);
        if (check[End] == 0) cout << "-1\n";
        else {
            stack<int> st;
            while (End != Begin) {
                st.push(End);
                End = truoc[End];
            }
            st.push(Begin);
            while (!st.empty()) {
                cout << st.top() << " ";
                st.pop();
            }
            cout << endl;
        }
        for (int i = 1; i <= v; i ++) adj[i].clear();
        memset(check, 0, sizeof(check));
        memset(truoc, 0, sizeof(truoc));
	  }
	return 0;
}