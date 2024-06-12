/**
 * 
 */
package practiceQuestionOnJava;

/**
 * @author Rupayan Dirghangi
 *
 */
public class SumOfBoundaryEleInAnMatrix {
	public static int SumOfBoundaryEleInAnMatrix(int m[][]) {
		int sum = 0;
		int topRow = 0, bottomRow = m.length, leftCol = 0, rightCol = m[0].length;
		// topRow->leftCol to rightCol
		for (int i = leftCol; i < rightCol - 1; i++) {
			sum += m[topRow][i];
		}
		// rightCol->topRow to bottomRow
		for (int j = topRow; j < bottomRow - 1; j++) {
			sum += m[j][rightCol - 1];
		}
		// bottomRow->rightCol to leftCol
		for (int i = rightCol - 1; i > leftCol; i--) {
			sum += m[bottomRow - 1][i];
		}
		// leftCol->bottomRow to topRow
		for (int j = bottomRow - 1; j > topRow; j--) {
			sum += m[j][leftCol];
		}
		return sum;
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[][] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
		System.out.println("Sum of boundary elements is " + SumOfBoundaryEleInAnMatrix(arr));

	}

}
