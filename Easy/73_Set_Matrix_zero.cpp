// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.\
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();    // Number of rows
        int n = matrix[0].size(); // Number of columns
        
        vector<int> row(m, 0);    // Row markers
        vector<int> col(n, 0);    // Column markers

        // Step 1: Mark rows and columns to be zeroed
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = 1;  // Mark this row
                    col[j] = 1;  // Mark this column
                }
            }
        }

        // Step 2: Update the matrix
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (row[i] == 1 || col[j] == 1) {
                    matrix[i][j] = 0;  // Set the cell to zero
                }
            }
        }
    }
};
