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
    cin.ignore();
    while (t--) {
        string str, s;
        getline(cin, str);
        stringstream ss(str);
        vector<int> even, odd;
        while (ss >> s)
        {
            int x = stoi(s);
            if (x % 2 == 0)
                even.push_back(x);
            else
                odd.push_back(x);
        }
        int le = odd.size(), chan = even.size();
        if ((le + chan) % 2 == 0 && chan > le) cout << "YES";
        else if ((le + chan) % 2 == 1 && le > chan) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
	return 0;
}