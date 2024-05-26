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
//ABCDEFGHIJKLMNOPQRSTUVWXYZ

int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	ll m, s;
    cin>>m>>s;
    if (m==1 && s==0) cout<<"0 0";
    else if (m*9<s || s==0) cout << "-1 -1";
    else {
	   	ll max=s, min=s;
	    string maxs(m, '0');
	    
	    string mins(m, '0');
	    mins[0]='1';
	    min-=1;
	    for(int i=0; i<m ; i++){
	    	if(max>9){
	    		maxs[i]='9';
	    		max-=9;
			}
			else{
				maxs[i]=max+'0';
				break;
			}
		}
		for(int i=m-1; i>0; i--){
			if(min>9){
				mins[i]='9';
				min-=9;
			}
			else{
				mins[i]=min+'0';
				min=0;
				break;
			}
		}
		if(min>0) mins[0]=min+'1';
		cout<<mins<<" "<<maxs;
   	}
	return 0;
}
