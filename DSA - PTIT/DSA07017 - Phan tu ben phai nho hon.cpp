#include <bits/stdc++.h>
#define __Fast__ ios_base :: sync_with_stdio (0);cin.tie(0);cout.tie(0);
#define __Tests__ int t; cin >> t; while(t --)
#define __Test__ int t = 1; while(t --)
#define __Tieu_Long__ int main()
#define Return return 0;
#define Start {
#define Finish }
#define ll long long
#define pb push_back
#define endl '\n'
#define fi first
#define se second
using namespace std;
//ABCDEFGHIJKLMNOPQRSTUVWXYZ

__Tieu_Long__ Start
	__Fast__
	__Tests__ Start
		int n;
		cin >> n;
		int a[n + 5];
		for (int i = 0; i < n; i ++) cin >> a[i];
		
		int right_min[n + 5], right_max[n + 5];
		stack<int> stk_1, stk_2;
		
		for (int i = n - 1; i >= 0; i --) {
			while (!stk_1.empty() && a[i] >= a[stk_1.top()]) stk_1.pop();
			if (stk_1.empty()) right_max[i] = -1;
			else right_max[i] = stk_1.top();
			stk_1.push(i);
		}
		
		for (int i = n - 1; i >= 0; i --) {
			while (!stk_2.empty() && a[i] <= a[stk_2.top()]) stk_2.pop();
			if (stk_2.empty()) right_min[i] = -1;
			else right_min[i] = a[stk_2.top()];
			stk_2.push(i);
		}
		for (int i = 0; i < n; i ++) {
			if (right_max[i] == -1) cout << "-1 ";
			else cout << right_min[right_max[i]] << " ";
		}
		cout << endl;
	Finish
	Return
Finish
