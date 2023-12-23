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
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;

int main() {
    ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        string s;
        cin >> s;
        int d[10] = {};
        for (char x : s) {
            if (x == '2') d[2]++;
            else if (x == '3') d[3]++;
            else if (x == '4') d[3]++, d[2]+=2;
            else if (x == '5') d[5]++;
            else if (x == '6') d[5]++, d[3]++;
            else if (x == '7') d[7]++;
            else if (x == '8') d[7]++, d[2]+=3;
            else if (x == '9') d[7]++, d[3]+=2, d[2]++; 
        }
        for (int i = 9; i >= 2; --i) {
            //cout << d[i] << endl;
            for (int j = 1; j <= d[i] ; j++) cout << i;
        }
        cout << endl;
    }
    return 0;
}