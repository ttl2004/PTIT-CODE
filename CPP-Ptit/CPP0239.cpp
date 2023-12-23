#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
#define fi first
#define se second
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
int findRank(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int rank = 0;

    for (int i = 0; i < cols; ++i) {
        // Tìm phần tử khác không đầu tiên ở cột i
        int idx_0 = -1;
        for (int j = rank; j < rows; ++j) {
            if (matrix[j][i] != 0) {
                idx_0 = j;
                break;
            }
        }

        if (idx_0 != -1) {
            // Swap hàng idx_0 với hàng rank
            swap(matrix[rank], matrix[idx_0]);
            // Đưa các phần tử còn lại ở cột i về 0
            for (int j = 0; j < rows; ++j) {
                if (j != rank && matrix[j][i] != 0) {
                    int f = matrix[j][i] / matrix[rank][i];
                    for (int k = 0; k < cols; ++k) {
                        matrix[j][k] -= f * matrix[rank][k];
                    }
                }
            }

            ++rank;
        }
    }

    return rank;
}

int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int N, M;
        cin >> N >> M;

        vector<vector<int>> matrix(N, vector<int>(M));

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> matrix[i][j];
            }
        }

        int rank = findRank(matrix);
        cout << rank << endl;
    }

    return 0;
}
