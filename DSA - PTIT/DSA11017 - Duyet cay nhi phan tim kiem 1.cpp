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
};
typedef node *NODE;
void insert(NODE &t, int x) {
    if (t == NULL) {
        NODE p = new node;
        p -> data = x;
        p -> Left = NULL;
        p -> Right = NULL;
        t = p;
    }
    else if (x < t -> data) {
        insert(t -> Left, x);
    }
    else if (x > t -> data) {
        insert(t -> Right, x);
    }
}
void Duyet_LRN(NODE t) {
    if (t != NULL) {
        Duyet_LRN(t -> Left);
        Duyet_LRN(t -> Right);
        cout << t -> data << " ";
    }
}

int main(){
    Fast();
    Tests() {
        int n;
        cin >> n;
        NODE root = NULL;
        for (int i = 0; i < n; i ++) {
            int x;
            cin >> x;
            insert(root, x);
        }
        Duyet_LRN(root);
        cout << endl;
    }
    return 0;
}
