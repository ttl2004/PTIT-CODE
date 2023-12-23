#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
#define F for
#define W while
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
	ll tu, mau;
	//PhanSo(ll tu = 1, ll mau = 1) : tu(tu), mau(mau) {}
	PhanSo(long long t = 1, long long m = 1) {
        tu = t;
        mau = m;
    }

	void rutgon() {
        long long uc = __gcd(tu, mau);
        tu /= uc;
        mau /= uc;
    }
	 friend istream &operator >> (istream &is, PhanSo &A) {
        return is >> A.tu >> A.mau;
    }

    friend ostream &operator << (ostream &os, PhanSo A) {
        return os << A.tu << "/" << A.mau;
    }

    PhanSo operator + (PhanSo B) {
        PhanSo A;
        A.tu = tu * B.mau + B.tu * mau;
        A.mau = mau * B.mau;
        A.rutgon();
        return A;
    }
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
