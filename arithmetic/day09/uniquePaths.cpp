#include<bits/stdc++.h>
using namespace std;

/*int uniquePaths(int m, int n) {
    vector<vector<int>> ve(m, vector<int>(n));
    for (int i = 0; i < m; ++i)
        ve[i][0] = 1;
    for (int j = 0; j < n; ++j)
        ve[0][j] = 1;
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j)
            ve[i][j] = ve[i - 1][j] + ve[i][j - 1];
    }
    return ve[m - 1][n - 1];
}*/

int uniquePaths(int m, int n) {
    vector<int> ve(n, 1);
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j)
            ve[j] += ve[j - 1];
    }
    return ve[n - 1];
}

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int row = obstacleGrid.size();
    int col = obstacleGrid[0].size();
    vector<int> ve(col);
    ve[0] = (obstacleGrid[0][0] == 0);
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (obstacleGrid[i][j] == 1) {
                ve[j] = 0;
                continue;
            }
            if (j - 1 >= 0 && obstacleGrid[i][j - 1] == 0)
                ve[j] += ve[j - 1];
        }
    }
    return ve.back();
}

int main() {

    vector<vector<int>> obstacleGrid = {
            {0, 1},
            {0, 0}
    };

    cout << uniquePaths(3, 7);

    cout << uniquePathsWithObstacles(obstacleGrid);
    return 0;
}
