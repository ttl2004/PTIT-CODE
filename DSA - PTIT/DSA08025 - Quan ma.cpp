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
const pair<int, int> Oxy[8] = {{-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}};
bool kt[100][100];
void bfs(pair<pair<int, int>, int> u, pair<pair<int, int>, int> v) {
    queue<pair<pair<int, int>, int>> qe;
    qe.push(u);
    kt[u.first.first][u.first.second] = 1;
    while (!qe.empty()) {
        pair<pair<int, int>,int> e = qe.front();
        qe.pop();
        if(v.first.first == e.first.first && e.first.second == v.first.second){
            cout << e.second << endl;
            return;
        }
        for (int i = 0; i < 8; i++){
            int x =  e.first.first + Oxy[i].first;
            int y = e.first.second + Oxy[i].second;
            if (!kt[x][y] && x < 8 && y < 8 &&  x >= 0 && y >= 0) {
                kt[x][y] = 1; 
                qe.push({{x, y}, e.second + 1});
    
            }
        }
        
    }
}
int main() {
    ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t ;
    cin >> t;
    while (t--) {
        memset(kt, 0, sizeof(kt));
        pair<char, int> x1;
        pair<char, int> x2;
        cin >> x1.first >> x1.second >> x2.first >> x2.second;
        pair<pair<int, int>, int> pa, pt;
        pa.first.second = 8 - x1.second;
        pa.first.first = x1.first - 'a';
        pa.second = 0;
        pt.first.second = 8 - x2.second;
        pt.first.first = x2.first - 'a';
        pt.second = 0;
        bfs(pa, pt);
    }
    return 0;
}
