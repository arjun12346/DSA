class Solution {
    public boolean isSafe(char[][] board, int row, int col, char num) {
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == num)
                return false;
            if (board[i][col] == num)
                return false;
        }
        int startRow = row - row % 3;
        int startCol = col - col % 3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[startRow + i][startCol+j] == num) {
                    return false;
                }
            }
        }
        return true;
    }

     public boolean helper(char[][] board, int row, int col) {

        // All rows have been completed
        if (row == 9) {
            return true;
        }

        // Move to the next row
        if (col == 9) {
            return helper(board, row + 1, 0);
        }

        // Skip cells that are already filled
        if (board[row][col] != '.') {
            return helper(board, row, col + 1);
        }

        // Try digits 1 through 9
        for (char num = '1'; num <= '9'; num++) {

            if (isSafe(board, row, col, num)) {

                // Make a choice
                board[row][col] = num;

                // Explore the next cell
                if (helper(board, row, col + 1)) {
                    return true;
                }

                // Undo the choice if it fails
                board[row][col] = '.';
            }
        }

        return false;
    }

    public void solveSudoku(char[][] board) {
        helper(board, 0, 0);
    }
}