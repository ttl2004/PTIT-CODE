#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin >> n;
        long long one=0, two=0;
        for(long long i=2; i*i<=n; i++){
            if(n % i == 0){
                two++;
                while(n%i==0){
                    one++;
                    n/=i;
                }
            }
        }
        if(n != 1){
            one++;
            two++;
        }
        if(one==3 && two==3) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}