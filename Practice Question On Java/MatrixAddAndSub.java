/**
 * 
 */
package practiceQuestionOnJava;

/**
 * @author Rupayan Dirghangi
 *
 */
public class MatrixAddAndSub {
	public static void matrixAddition(int m1[][], int m2[][]) {
		for (int i = 0; i < m1.length; i++) {
			for (int j = 0; j < m1[i].length; j++) {
				m1[i][j] += m2[i][j];
			}
		}
	}

	public static void matrixSubtraction(int m1[][], int m2[][]) {
		for (int i = 0; i < m1.length; i++) {
			for (int j = 0; j < m1[i].length; j++) {
				m1[i][j] -= m2[i][j];
			}
		}
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
//		matrixAddition(m1, m2);
		matrixSubtraction(m1, m2);
		display(m1);

	}

}
