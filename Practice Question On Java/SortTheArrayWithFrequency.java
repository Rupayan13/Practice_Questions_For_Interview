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
public class SortTheArrayWithFrequency {
	public static void sortWithFreq(int arr[]) {
		int n = arr.length;
		HashMap<Integer, Integer> a = new HashMap<>();
		for (int i = 0; i < n; i++) {
			if (a.containsKey(arr[i])) {
				a.put(arr[i], a.get(arr[i]) + 1);
			} else {
				a.put(arr[i], 1);
			}
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (a.get(arr[j]) > a.get(arr[j + 1])) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}

	public static void display(int arr[]) {
		for (var i : arr) {
			System.out.print(i + " ");
		}
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of terms in array1 :");
		int n = sc.nextInt();
		int arr[] = new int[n];
		for (int i = 0; i < n; i++) {
			System.out.println("Enter the element in the array 1 at index " + i + " :");
			arr[i] = sc.nextInt();
		}
		System.out.println("array before sorting :-");
		display(arr);
		sortWithFreq(arr);
		System.out.println("\narray before sorting :-");
		display(arr);

	}

}
