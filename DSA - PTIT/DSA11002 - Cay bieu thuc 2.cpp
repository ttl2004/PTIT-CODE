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
vector<string> str;
struct node{
    string data;
    node *Left;
    node *Right;
};
typedef node *NODE;
NODE MakeNode(string x) {
    NODE p = new node;
    p -> data = x;
    p -> Left = NULL;
    p -> Right = NULL;
    return p;
}
NODE InsertLevelOrder(NODE root, string a[], int n, int i) {
    if (i < n) {
        NODE tmp = MakeNode(a[i]);
        root = tmp;
        root -> Left = InsertLevelOrder(root -> Left, a, n, 2 * i + 1);
        root -> Right = InsertLevelOrder(root -> Right, a, n, 2 * i + 2);
    }
    return root;
}
void Duyet_LRN(NODE root) {
    if (root != NULL) {
        Duyet_LRN(root -> Left);
        Duyet_LRN(root -> Right);
        str.pb(root -> data);
    }
}
int main(){
    Fast();
    Tests() {
        int n;
        cin >> n;
        NODE root = NULL;
        string arr[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        root = InsertLevelOrder(root, arr, n, 0);
        Duyet_LRN(root);
        stack<string> stk;
        for (auto x : str) {
            if (x != "*" && x != "+" && x != "-" && x != "/") {
                stk.push(x);
            }
            else {
                string s1 = stk.top();
                stk.pop();
                string s2 = stk.top();
                stk.pop();
                ll f;
                if (x == "*") f = stoll(s2) * stoll(s1);
                if (x == "+") f = stoll(s2) + stoll(s1);
                if (x == "-") f = stoll(s2) - stoll(s1);
                if (x == "/") f = stoll(s2) / stoll(s1);
                string s3 = to_string(f);
                stk.push(s3);
            }
        }
        cout << stk.top() << endl;
    }
    return 0;
}
