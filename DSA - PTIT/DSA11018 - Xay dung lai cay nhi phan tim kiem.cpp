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
    node (int x) {
        data = x;
        Left = Right = NULL;
    }
};

typedef node *NODE;

void InsertNode(NODE &root, int x) {
    if (root == NULL) {
        root = new node(x);
    }
    if (x < root -> data) {
        InsertNode(root -> Left, x);
    }
    else if (x > root -> data) {
        InsertNode(root -> Right, x);
    }
}
void Duyet_NLR(NODE root) {
    if (root != NULL) {
        cout << root -> data << " ";
        Duyet_NLR(root -> Left);
        Duyet_NLR(root -> Right);
    }
}
__Tieu_Long__{
    Fast();
    Tests() {
        int n;
        cin >> n;
        NODE root = NULL;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            InsertNode(root, x);
        }
        Duyet_NLR(root);
        cout << endl;
    }
    return 0;
}
