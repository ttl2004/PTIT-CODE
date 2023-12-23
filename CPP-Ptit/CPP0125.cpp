#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;
int check[1000005];
void sang() {
	for (int i = 1; i <= 1000005; i++) check[i] = 1;
	check[0] = check[1] = 0;
	for (int i = 2; i*i <= 1000005; i++) {
		if (check[i]) {
			for (int j = i*i; j <= 1000005; j += i){
				check[j] = 0;
			}
		}
	}
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    sang();
    int a, b;
   	cin >> a >> b;
   	if (a > b) swap(a, b);
   	for (int i = a + 1; i < b; i++)
   	{
   		if (check[i]) cout << i << " ";
   	}
	return 0;
}