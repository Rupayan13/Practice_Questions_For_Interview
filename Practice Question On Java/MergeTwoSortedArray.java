/**
 * 
 */
package practiceQuestionOnJava;

/**
 * @author Rupayan Dirghangi
 *
 */
public class MergeTwoSortedArray {
	public static int[] merge(int arr1[], int arr2[]) {
		int n1 = arr1.length;
		int n2 = arr2.length;
		int arr[] = new int[n1 + n2];
		int i = 0;
		int j = 0;
		int k = 0;
		while (i < n1 && j < n2) {
			if (arr1[i] <= arr2[j])
				arr[k++] = arr1[i++];
			else
				arr[k++] = arr2[j++];
		}
		while (i < n1) {
			arr[k++] = arr1[i++];
		}
		while (j < n2) {
			arr[k++] = arr2[j++];
		}
		return arr;
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
		int arr1[] = { 2, 5, 8, 9 };
		int arr2[] = { 1, 3, 4, 10 };
		int arr[] = merge(arr1, arr2);
		display(arr);

	}

}
