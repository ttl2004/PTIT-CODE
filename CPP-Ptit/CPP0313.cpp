#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;

int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    string s1, s2, s, x;
    getline(cin, s1);
    getline(cin, s2);
    vector<string> str1, str2;
    stringstream ss(s1);
    while (ss >> s) {
    	str1.pb(s);
    }
    stringstream ss2(s2);
   	while (ss2 >> x){
   		str2.pb(x);
   	}
    for (int i = 0; i < str2.size(); i++){
    	for (int j = 0; j < str1.size(); j++){
    		if(str1[j] == str2[i]) str1[j][0] = '@';
    	}
    }
    for (int i = 0; i < str1.size(); i++){
    	if (str1[i][0] != '@') cout << str1[i];
    	if (i != str1.size() -1 ) cout << " ";
    }
}