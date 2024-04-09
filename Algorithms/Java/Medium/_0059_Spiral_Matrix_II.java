import java.util.*;

public class _0059_Spiral_Matrix_II {
    static int[][] generateMatrix(int n) {
        int[][] matrix = new int[n][n];
        int topRow = 0, bottomRow = n - 1;
        int leftCol = 0, rightCol = n - 1;
        int current = 1;
        while(current <= (n * n)) {
            for(int j = leftCol; j <= rightCol && current <= (n * n); j++) {
                matrix[topRow][j] = current++;
            }
            topRow++;
            for(int i = topRow; i <= bottomRow && current <= (n * n); i++) {
                matrix[i][rightCol] = current++;
            }
            rightCol--;
            for(int j = rightCol; j >= leftCol && current <= (n * n); j--) {
                matrix[bottomRow][j] = current++;
            }
            bottomRow--;
            for(int i = bottomRow; i >= topRow && current <= (n * n); i--) {
                matrix[i][leftCol] = current++;
            }
            leftCol++;
        }
        return matrix;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rowNumber = sc.nextInt();
        sc.close();
        int[][] spiralMatrix = generateMatrix(rowNumber);
        for(int i = 0; i < spiralMatrix.length; i++) {
            for(int j = 0; j < spiralMatrix[i].length; j++) {
                System.out.print(spiralMatrix[i][j] + " ");
            }
            System.out.println("");
        }
    }
}

// Example 1:
// Input: n = 3
// Output: [[1,2,3],[8,9,4],[7,6,5]]

// Example 2:
// Input: n = 1
// Output: [[1]]