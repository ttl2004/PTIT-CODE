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
#define PI 3.141592653589793238
struct tt{
	double x1, y1, x2, y2, x3, y3;
	double A, B, C;
};
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i ++) {
		tt a;
		cin >> a.x1 >> a.y1 >> a.x2 >> a.y2 >> a.x3 >> a.y3;
		a.A = sqrt((a.x1 - a.x2) * (a.x1 - a.x2) + (a.y1 - a.y2) * (a.y1 - a.y2));
		a.B = sqrt((a.x3 - a.x2) * (a.x3 - a.x2) + (a.y3 - a.y2) * (a.y3 - a.y2));
		a.C = sqrt((a.x1 - a.x3) * (a.x1 - a.x3) + (a.y1 - a.y3) * (a.y1 - a.y3));
		if ((a.A + a.B) > a.C && (a.A + a.C) > a.B && (a.C + a.B) > a.A) {
			double  p = (a.A + a.B + a.C)/2;
			double  s = sqrt(p*(p - a.A)*(p - a.B)*(p - a.C));
			double  r = (a.A * a.B * a.C)/(4*s);
			cout << fixed << setprecision(3) << PI * r *r << endl;
		}
		else cout << "INVALID\n";
	}

	return 0;
}
//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
