#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void xuly(int arr[], int n, int k) {
    priority_queue<pair<int, int>> pq; // priority queue lưu giá trị và chỉ mục
    for (int i = 0; i < k; i++) {
        pq.push({arr[i], i});
    }

    vector<int> result;
    for (int i = k; i < n; i++) {
        result.push_back(pq.top().first);
        // Loại bỏ các phần tử không còn nằm trong cửa sổ con
        while (!pq.empty() && pq.top().second <= i - k) {
            pq.pop();
        }
        pq.push({arr[i], i});
    }

    result.push_back(pq.top().first);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
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
