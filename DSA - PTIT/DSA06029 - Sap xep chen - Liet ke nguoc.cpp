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
int cnt = 1;
vector<string> kq;
void insertionSort(int arr[], int n){
	kq.pb("Buoc 0: " + to_string(arr[0]));
   	for (int i = 1; i < n; i++){
       int key = arr[i];
       int j = i-1;
       /* Di chuyển các phần tử có giá trị lớn hơn giá trị 
       key về sau một vị trí so với vị trí ban đầu
       của nó */
       while (j >= 0 && arr[j] > key) {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
       string tmp;
	   tmp += "Buoc " + to_string(cnt++) + ": ";
       for (int k = 0; k <= i; k ++) tmp += to_string(arr[k]) + " ";
       kq.pb(tmp);
   }
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t --) {
		int n;
		cin >> n;
		int arr[n + 5];
		for (int i = 0; i < n; i ++) cin >> arr[i];
		insertionSort(arr, n);
		int len = kq.size();
		for (int i = len - 1; i >= 0; i --) cout << kq[i] << endl;
	}
	return 0;
}
