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
//‘A’, ‘E’, ‘I’, ‘O’, ‘U’, ‘Y’
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != 'A' && s[i] != 'a' && s[i] != 'E' && s[i] != 'e' && s[i] != 'o' && s[i] != 'O' && s[i] != 'I' && s[i] != 'i' && s[i] != 'U' && s[i] != 'u' && s[i] != 'Y' && s[i] != 'y') {
            cout << "." << (char)tolower(s[i]);
        }
    }
	return 0;
}