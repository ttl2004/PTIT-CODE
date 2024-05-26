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
struct node{
    ll data;
    node *Left;
    node *Right;
    node (int x) {
        data = x;
        Left = Right = NULL;
    }
};

typedef node *NODE;
map<ll, NODE> mp;

void xuly(NODE root) {
	if (root == NULL)return;
	stack<NODE> S1, S2;
	S1.push(root);
	while (S1.size() || S2.size()) {
		while (S1.size()) {
			NODE tmp = S1.top();
			S1.pop();
			cout << tmp -> data << " ";
			if (tmp -> Right != NULL) S2.push(tmp -> Right);
			if (tmp -> Left != NULL) S2.push(tmp -> Left);
		}
		while (S2.size()) {
			NODE tmp = S2.top();
			S2.pop();
			cout << tmp -> data << " ";
			if (tmp -> Left != NULL) S1.push(tmp -> Left);
			if (tmp -> Right != NULL) S1.push(tmp -> Right);
		}
	}
}
__Tieu_Long__{
    Fast();
    Tests() {
        mp.clear();
        int n;
        cin >> n;
        NODE root = NULL;
        for (int i = 0; i < n; i++) {
            ll u, v;
            string x;
            cin >> u >> v >> x;
            if (mp.find(u) == mp.end()) {
                root = new node(u);
                if (x == "L") {
                    root -> Left = new node(v);
                    mp[v] = root -> Left;
                }
                else {
                    root -> Right = new node(v);
                    mp[v] = root -> Right;
                }
                mp[u] = root;
            }
            else {
                if (x == "L") {
                    mp[u] -> Left = new node(v);
                    mp[v] = mp[u] -> Left;
                }
                else {
                    mp[u] -> Right = new node(v);
                    mp[v] = mp[u] -> Right;
                }
            }
        }
        xuly(root);
        cout << endl;
    }
    return 0;
}
