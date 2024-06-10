/**
 * 
 */
package practiceQuestionOnJava;

import java.util.HashMap;

/**
 * @author Rupayan Dirghangi
 *
 */
public class SumOfOddFreqElement {
	public static int sumOfOddFreqElement(int arr[]) {
		HashMap<Integer, Integer> a = new HashMap<>();
		for (int i = 0; i < arr.length; i++) {
			if (a.containsKey(arr[i])) {
				a.put(arr[i], a.get(arr[i]) + 1);
			} else {
				a.put(arr[i], 1);
			}
		}
		int sum = 0;
		for (int i = 0; i < arr.length; i++) {
			if (a.get(arr[i]) % 2 != 0) {
				sum += arr[i];
			}
		}
		return sum;
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[] = { 1, 2, 3, 3, 4, 4, 4 };
		System.out.println(sumOfOddFreqElement(arr));

	}

}
