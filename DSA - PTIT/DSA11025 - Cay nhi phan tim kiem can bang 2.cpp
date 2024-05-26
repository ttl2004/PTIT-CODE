#include <bits/stdc++.h>
#define __Tieu_Long__PROPTIT__ int main()
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
struct node {
    int data;
    node *Left;
    node *Right;
    node(int x) {
        data = x;
        Left = Right = NULL;    
    }
};
typedef node *NODE;
NODE build_AVL(int a[], int l, int r) {
    if (l > r) return NULL;
    int mid = (l + r) / 2;
    NODE root = new node(a[mid]);
    root -> Left = build_AVL(a, l, mid - 1);
    root -> Right = build_AVL(a, mid + 1, r);
    return root;
}
void Duyet_NLR(NODE root) {
    if (root == NULL) return;
    cout << root -> data << " ";
    Duyet_NLR(root -> Left);
    Duyet_NLR(root -> Right);
}
__Tieu_Long__PROPTIT__{
    Fast();
    Tests() {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n; i ++) cin >> a[i];
        sort(a, a + n);
        NODE root = build_AVL(a, 0, n - 1);
        Duyet_NLR(root);
        cout << endl;
	}
}