#include <vector>
#include <iostream>
using namespace std;

int countServers(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    
    vector<int> rowCount(m, 0); // To store the number of servers in each row
    vector<int> colCount(n, 0); // To store the number of servers in each column
    
    // Count the number of servers in each row and column
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                rowCount[i]++;
                colCount[j]++;
            }
        }
    }
    
    int result = 0;
    
    // Check each server to see if it can communicate
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1 && (rowCount[i] > 1 || colCount[j] > 1)) {
                result++;
            }
        }
    }
    
    return result;
}

int main() {
    vector<vector<int>> grid1 = {{1, 0}, {0, 1}};
    vector<vector<int>> grid2 = {{1, 0}, {1, 1}};
    vector<vector<int>> grid3 = {{1, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};

    cout << "Output 1: " << countServers(grid1) << endl; // Output: 0
    cout << "Output 2: " << countServers(grid2) << endl; // Output: 3
    cout << "Output 3: " << countServers(grid3) << endl; // Output: 4

    return 0;
}
