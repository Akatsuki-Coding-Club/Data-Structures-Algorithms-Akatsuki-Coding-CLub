import java.util.*;

public class NQueen {

    public List<List<String>> solveNQueens(int n) {
        List<List<String>> result = new ArrayList<>();
        int[] queens = new int[n];
        Arrays.fill(queens, -1);
        solveNQueensHelper(result, queens, 0);
        return result;
    }

    private void solveNQueensHelper(List<List<String>> result, int[] queens, int row) {
        if (row == queens.length) {
            result.add(generateBoard(queens));
        } else {
            for (int col = 0; col < queens.length; col++) {
                if (isSafe(queens, row, col)) {
                    queens[row] = col;
                    solveNQueensHelper(result, queens, row + 1);
                    queens[row] = -1;
                }
            }
        }
    }

    private boolean isSafe(int[] queens, int row, int col) {
        for (int i = 0; i < row; i++) {
            if (queens[i] == col || 
                queens[i] - i == col - row || 
                queens[i] + i == col + row) {
                return false;
            }
        }
        return true;
    }

    private List<String> generateBoard(int[] queens) {
        List<String> board = new ArrayList<>();
        for (int i = 0; i < queens.length; i++) {
            char[] row = new char[queens.length];
            Arrays.fill(row, '.');
            row[queens[i]] = 'Q';
            board.add(new String(row));
        }
        return board;
    }

    public static void main(String[] args) {
        NQueen nQueens = new NQueen();
        int n = 4; // Change the value of n as needed
        List<List<String>> solutions = nQueens.solveNQueens(n);
        for (List<String> solution : solutions) {
            for (String row : solution) {
                System.out.println(row);
            }
            System.out.println();
        }
    }
}
