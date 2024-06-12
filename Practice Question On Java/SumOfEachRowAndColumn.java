/**
 * 
 */
package practiceQuestionOnJava;

/**
 * @author Rupayan Dirghangi
 *
 */
public class SumOfEachRowAndColumn {
	public static int sumOfEachRowAndColumn(int arr[][]) {
		int sum = 0;
		for (int i = 0; i < arr.length; i++) {
			for (int j = 0; j < arr[i].length; j++) {
				sum += arr[i][j];
			}
		}
		return sum;
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[][] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
		System.out.println("Sum of all elements is " + sumOfEachRowAndColumn(arr));

	}

}
