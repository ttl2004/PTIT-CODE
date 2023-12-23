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
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
struct PhanSo{
    ll tu;
    ll mau;
};
void rutgon(PhanSo &A) {
    ll k = __gcd(A.tu, A.mau);
    A.tu /= k;
    A.mau /= k;
}
void process(PhanSo A, PhanSo B) {
    PhanSo C, D;
    C.tu = (A.tu * B.mau + B.tu * A.mau) * (A.tu * B.mau + B.tu * A.mau);
    C.mau = (A.mau * B.mau) * (A.mau * B.mau);
    rutgon(C);
    D.tu = A.tu * B.tu * C.tu ;
    D.mau = A.mau * B.mau * C.mau;
    rutgon(D);
    printf("%lld/%lld %lld/%lld\n", C.tu, C.mau, D.tu, D.mau);

}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
