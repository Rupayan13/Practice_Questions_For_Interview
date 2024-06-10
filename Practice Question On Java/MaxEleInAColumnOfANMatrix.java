/**
 * 
 */
package practiceQuestionOnJava;

/**
 * @author Rupayan Dirghangi
 *
 */
public class MaxEleInAColumnOfANMatrix {
	public static void maxEleInAColumnOfANMatrix(int m[][]) {
		for (int i = 0; i < m.length; i++) {
			int max = Integer.MIN_VALUE;
			for (int j = 0; j < m[i].length; j++) {
				if (max < m[j][i]) {
					max = m[j][i];
				}
			}
			System.out.println("Maximum column in row " + i + " is " + max);
		}
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int m1[][] = { { 1, 2, 3 }, { 2, 4, 6 }, { 5, 6, 7 } };
		maxEleInAColumnOfANMatrix(m1);

	}

}
