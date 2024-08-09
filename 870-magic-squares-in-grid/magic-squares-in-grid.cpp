class Solution {
public:
    bool isMagicSquare(vector<vector<int>>& grid, int row, int col) {
        // Check if the numbers from 1 to 9 are present
        vector<int> count(10, 0);
        for (int i = row; i < row + 3; i++) {
            for (int j = col; j < col + 3; j++) {
                int num = grid[i][j];
                if (num < 1 || num > 9) return false;
                count[num]++;
            }
        }
        for (int i = 1; i <= 9; i++) {
            if (count[i] != 1) return false;
        }
        
        // Check the sum of each row, column, and diagonals
        int sumr = grid[row][col] + grid[row][col + 1] + grid[row][col + 2];
        for (int i = 0; i < 3; i++) {
            int rowSum = grid[row + i][col] + grid[row + i][col + 1] + grid[row + i][col + 2];
            int colSum = grid[row][col + i] + grid[row + 1][col + i] + grid[row + 2][col + i];
            if (rowSum != sumr || colSum != sumr) return false;
        }
        
        int diag1 = grid[row][col] + grid[row + 1][col + 1] + grid[row + 2][col + 2];
        int diag2 = grid[row][col + 2] + grid[row + 1][col + 1] + grid[row + 2][col];
        
        if (diag1 != sumr || diag2 != sumr) return false;
        
        return true;
    }
    
    int numMagicSquaresInside(vector<vector<int>>& grid) { 
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        
        // Iterate through all possible 3x3 subgrids
        for (int i = 0; i <= n - 3; i++) {
            for (int j = 0; j <= m - 3; j++) {
                if (isMagicSquare(grid, i, j)) {
                    count++;
                }
            }
        }
        
        return count;
    }
};
