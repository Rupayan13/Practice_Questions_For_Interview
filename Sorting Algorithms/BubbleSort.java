/**
 * 
 */
package sorting_practice;

/**
 * @author Rupayan Dirghangi
 *
 */
public class BubbleSort {
	public static void swap(int arr[], int x, int y) {
		int temp = arr[x];
		arr[x] = arr[y];
		arr[y] = temp;
	}

	public static void bubbleSort(int arr[]) {
		int n = arr.length;
		for (int i = 0; i < n - 1; i++) {
			boolean flag = false;
			for (int j = 0; j < n - i - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					swap(arr, j, j + 1);
					flag = true;
				}
			}
			if (flag == false) {
				return;
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
		int arr[] = { 2, 5, 7, 1, 3, 6 };
		System.out.println("Array before sorting :-");
		display(arr);
		bubbleSort(arr);
		System.out.println("\nArray after sorting :-");
		display(arr);

	}

}
