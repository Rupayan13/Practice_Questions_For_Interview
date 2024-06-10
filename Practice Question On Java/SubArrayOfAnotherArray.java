/**
 * 
 */
package practiceQuestionOnJava;

import java.util.HashMap;
import java.util.Scanner;

/**
 * @author Rupayan Dirghangi
 *
 */
public class SubArrayOfAnotherArray {
	public static boolean isSubArray(int arr1[], int arr2[]) {
		int n = arr1.length;
		int m = arr2.length;
		if (n < m) {
			return false;
		}
		HashMap<Integer, Integer> a1 = new HashMap<>();
		for (int i = 0; i < n; i++) {
			if (a1.containsKey(arr1[i])) {
				a1.put(arr1[i], a1.get(arr1[i]) + 1);
			} else {
				a1.put(arr1[i], 1);
			}
		}
		HashMap<Integer, Integer> a2 = new HashMap<>();
		for (int i = 0; i < m; i++) {
			if (a2.containsKey(arr2[i])) {
				a2.put(arr2[i], a2.get(arr2[i]) + 1);
			} else {
				a2.put(arr2[i], 1);
			}
		}
		for (int j = 0; j < m; j++) {
			boolean isPresent = false;
			for (int i = 0; i < n; i++) {
				if (arr1[i] == arr2[j]) {
					if (a1.get(arr1[i]) >= a2.get(arr2[j])) {
						isPresent = true;
					}
				}
			}
			if (isPresent == false) {
				return false;
			}
		}
		return true;
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of terms in array1 :");
		int n = sc.nextInt();
		int arr1[] = new int[n];
		System.out.println("Enter the number of terms in array2 :");
		int m = sc.nextInt();
		int arr2[] = new int[m];
		for (int i = 0; i < n; i++) {
			System.out.println("Enter the element in the array 1 at index " + i + " :");
			arr1[i] = sc.nextInt();
		}
		for (int i = 0; i < m; i++) {
			System.out.println("Enter the element in the array 2 at index " + i + " :");
			arr2[i] = sc.nextInt();
		}
		if (isSubArray(arr1, arr2)) {
			System.out.println("array 2 is a sub array of array 1.");
		} else {
			System.out.println("array 2 is not a sub array of array 1.");
		}

	}

}
