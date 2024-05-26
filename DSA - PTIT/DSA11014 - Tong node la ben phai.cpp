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

bool check (NODE root) {
    if (root == NULL) return false;
    else if (root -> Left == NULL && root -> Right == NULL) return true; // là những node có data nhung ko có node con => những node này sẽ lấy data để tính tổng
    return false;
}
ll sum(NODE root) {
    if(root == NULL) return 0;
    int ans = 0;
    if (check(root -> Right) == true) ans = root -> Right -> data;
    if (root -> Right != NULL) ans += sum(root -> Right);
    if (root -> Left != NULL && check(root -> Left) == false) ans += sum(root -> Left);
    return ans;
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
        cout << sum(root) << endl;
    }
    return 0;
}
