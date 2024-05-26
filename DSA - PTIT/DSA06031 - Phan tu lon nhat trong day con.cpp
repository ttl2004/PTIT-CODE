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
void xuly(int arr[], int n, int k) {
    priority_queue<pair<int, int>> pq; // priority queue lưu giá trị và vị trí của phần tử
    for (int i = 0; i < k; i++) {
        pq.push({arr[i], i});
    }
    vector<int> result;
    for (int i = k; i < n; i++) {
        result.push_back(pq.top().first); // push giá trị lớn nhất của dãy con trước đó
        // Loại bỏ các phần tử không còn nằm trong cửa sổ con có độ dài là k
        while (!pq.empty() && pq.top().second <= i - k) {
            pq.pop();
        }
        pq.push({arr[i], i}); // thêm phần tử còn lại  của dãy con đang xét
    }
    result.push_back(pq.top().first); //push giá trị lớn nhất của dãy con cuối cùng
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int n, k;
        cin >> n >> k;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        xuly(A, n, k);
	}
	return 0;
}
