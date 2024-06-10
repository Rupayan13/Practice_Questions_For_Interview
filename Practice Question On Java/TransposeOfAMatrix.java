/**
 * 
 */
package practiceQuestionOnJava;

/**
 * @author Rupayan Dirghangi
 *
 */
public class TransposeOfAMatrix {
	public static void transpose(int m[][]) {
		for (int i = 0; i < m.length; i++) {
			for (int j = i; j < m[i].length; j++) {
				int temp = m[i][j];
				m[i][j] = m[j][i];
				m[j][i] = temp;
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
		int m[][] = { { 1, 2, 3 }, { 2, 4, 6 }, { 5, 6, 7 } };
		display(m);
		System.out.println("Transpose of the matrix is :-");
		transpose(m);
		display(m);

	}

}
