/**
 * 
 */
package practiceQuestionOnJava;

/**
 * @author Rupayan Dirghangi
 *
 */
public class MatrixMultiplication {
	public static int[][] matrixMul(int m1[][], int r1, int c1, int m2[][], int r2, int c2) {
		if (c1 != r2) {
			System.out.println("Multiplication is not possible!");
			return null;
		}
		int mul[][] = new int[r1][c2];
		for (int i = 0; i < r1; i++) {
			for (int j = 0; j < c2; j++) {
				for (int k = 0; k < c1; k++) {
					mul[i][j] += (m1[i][k] * m2[k][j]);
				}
			}
		}
		return mul;
	}

	public static void display(int arr[][]) {
		for (int i = 0; i < arr.length; i++) {
			for (int j = 0; j < arr[i].length; j++) {
				System.out.print(arr[i][j] + " ");
			}
			System.out.println();
		}
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int m1[][] = { { 1, 2, 3 }, { 2, 4, 6 }, { 5, 6, 7 } };
		int m2[][] = { { 2, 4, 6 }, { 2, 7, 9 }, { 3, 14, 3 } };
		int ans[][] = matrixMul(m1, m1.length, m1[0].length, m2, m2.length, m2[0].length);
		display(ans);

	}

}
