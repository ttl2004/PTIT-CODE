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
    int data;
    node *Left;
    node *Right;
    node(int x){
        data = x;
        Left = Right = NULL;
    }
};

typedef node *NODE;
map<int, NODE> mp;

int check_1(NODE root) {
    if (root == NULL)  return 1;
    if ((root -> Left == NULL && root -> Right != NULL) || (root -> Left != NULL && root -> Right == NULL))  return 0;
    return check_1(root -> Left) && check_1(root -> Right);
}
__Tieu_Long__{
    Fast();
    Tests() {
        int n;
        cin >> n;
        NODE root = NULL;
        for (int i = 0; i < n; i++) {
            int u, v;
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
        if (check_1(root))  cout << "1" << endl;
        else  cout << "0" << endl;
        mp.clear();
    }
    return 0;
}