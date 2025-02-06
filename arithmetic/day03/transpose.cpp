#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(const vector<vector<int>> &matrix) {
    int row = matrix.size();
    int col = matrix[0].size();

    vector<vector<int>> ans(col, vector<int>(row));

    for (int i = 0; i < col; ++i) {
        for (int j = 0; j < row; ++j) {
            ans[i][j] = matrix[j][i];
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3},{4, 5, 6}};

    const vector<vector<int>> &ans = transpose(matrix);
    for (int i = 0; i < ans.size(); ++i) {
        for (int j = 0; j < ans[0].size(); ++j) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
