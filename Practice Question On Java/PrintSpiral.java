/**
 * 
 */
package practiceQuestionOnJava;

/**
 * @author Rupayan Dirghangi
 *
 */
public class PrintSpiral {
	public static void printSpiral(int m[][]) {
		int topRow = 0, bottomRow = m.length - 1, leftCol = 0, rightCol = m[0].length - 1;
		int count = 0, r = m.length, c = m[0].length;
		while (count < r * c) {
			// topRow->leftCol to rightCol
			for (int j = leftCol; j <= rightCol && count < r * c; j++) {
				System.out.print(m[topRow][j] + " ");
				count++;
			}
			topRow++;
			// rightCol->topRow to bottomRow
			for (int i = topRow; i <= bottomRow && count < r * c; i++) {
				System.out.print(m[i][rightCol] + " ");
				count++;
			}
			rightCol--;
			// bottomRow->rightCol to leftCol
			for (int j = rightCol; j >= leftCol && count < r * c; j--) {
				System.out.print(m[bottomRow][j] + " ");
				count++;
			}
			bottomRow--;
			// leftCol->bottomRow to topRow
			for (int i = bottomRow; i >= topRow && count < r * c; i--) {
				System.out.print(m[i][leftCol] + " ");
				count++;
			}
			leftCol++;
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
		int arr[][] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
		display(arr);
		System.out.println("Spriral Print is :-");
		printSpiral(arr);

	}

}
