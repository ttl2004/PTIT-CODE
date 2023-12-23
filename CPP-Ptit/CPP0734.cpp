#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define pb push_back
using namespace std;
 
vector<int> lefts( vector<int>& arr){
    int n = arr.size();
    vector<int> left(n, 0);
    stack<int> s;
    for(int i = 0; i < n; i++){
        while (!s.empty() && arr[i] <= arr[s.top()]){
            s.pop();
        }
        if(s.empty()){
            left[i] = 0;
        } 
        else{
            left[i] = s.top() + 1;
        }
        s.push(i);
    }
    return left;
}
 
vector<int> rights( vector<int>& arr){
    int n = arr.size();
    vector<int> right(n, 0);
    stack<int> s; 
    for(int i = n - 1; i >= 0; i--){
        while(!s.empty() && arr[i] <= arr[s.top()]){
            s.pop();
        }
        if(s.empty()){
            right[i] = n - 1;
        } 
        else{
            right[i] = s.top() - 1;
        }
        s.push(i);
    }
 
    return right;
}
 
vector<int> i_Cost( vector<int>& arr){
    vector<int> left = lefts(arr);
    vector<int> right = rights(arr);
    int n = arr.size();
    vector<int> i_cost(n, 0);
    for(int i = 0; i < n; i++){
        i_cost[i] = right[i] - left[i] + 1;
    }
 
    return i_cost;
}
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m, _max = 0;
		cin >> n >> m;
		vector <vector <int> > a(n,vector <int> (m));
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m ; j++) cin >> a[i][j];
		}
		for(int i = 0; i < m; i++) {
			for(int j = 1;j < n; j++) {
				if(a[j][i] == 1) a[j][i] = a[j - 1][i] + 1;
			}
		}
		for (int i = 0 ; i < n; i ++) {
			//sort(a[i].begin(), a[i].end());
			vector<int> kq = i_Cost(a[i]);
			for(int j=0;j<m;j++) 
				_max = max(_max, kq[j] * a[i][j]);
		}
		cout << _max<< endl;
	} 
    return 0;
} 