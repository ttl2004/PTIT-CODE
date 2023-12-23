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
struct tt{
    string id, name;
    int slg;
};
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    tt a[n + 5];
    for (int i = 0; i < n; i ++) {
        cin.ignore();
        getline(cin, a[i].id);
        getline(cin, a[i].name);
        cin >> a[i].slg;
    }
    sort(a, a + n, [] (tt b, tt c) {
        if(b.slg != c.slg) return b.slg > c.slg;
        else return b.id < c.id;
    });
    for (int i = 0; i < n; i ++) {
        cout << a[i].id << " " << a[i].name << " " << a[i].slg << endl;
    }
	return 0;
}