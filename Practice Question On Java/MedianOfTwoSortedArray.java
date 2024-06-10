/**
 * 
 */
package practiceQuestionOnJava;

/**
 * @author Rupayan Dirghangi
 *
 */
public class MedianOfTwoSortedArray {
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

	public static int median(int arr[]) {
		int n = arr.length;
		int x = n / 2;
		if (n % 2 == 0) {
			return ((arr[x] + arr[x - 1]) / 2);
		} else {
			return arr[x - 1];
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
		int arr1[] = { 1, 12, 15, 26, 38 };
		int arr2[] = { 2, 13, 17, 30, 45 };
		int arr[] = merge(arr1, arr2);
//		display(arr);
		System.out.println(median(arr));

	}

}
