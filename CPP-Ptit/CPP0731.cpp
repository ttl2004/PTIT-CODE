#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int solve(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) {
        return 0; // Không cần di chuyển nếu mảng có 1 phần tử hoặc không có phần tử nào.
    }

    vector<int> steps(n, INT_MAX); // steps[i] sẽ chứa số bước ít nhất để đến phần tử thứ i
    steps[0] = 0; // Không cần bước nào để đến phần tử đầu tiên
	if (arr[0] == 0) return -1; //neu phan tu dau tien bang 0 thì khong thể di chuyển tiếp
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= arr[i] && i + j < n; ++j) {
            // Cập nhật số bước ít nhất để đến các phần tử tiếp theo có thể đạt được từ vị trí hiện tại
            steps[i + j] = min(steps[i + j], steps[i] + 1);
        }
    }

    return (steps[n - 1] == INT_MAX) ? -1 : steps[n - 1];
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }

        // Gọi hàm và in kết quả
        cout << solve(arr) << endl;
    }

    return 0;
}