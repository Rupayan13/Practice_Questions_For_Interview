/**
 * 
 */
package sorting_practice;

/**
 * @author Rupayan Dirghangi
 *
 */
public class SelectionSort {
	public static void swap(int arr[], int x, int y) {
		int temp = arr[x];
		arr[x] = arr[y];
		arr[y] = temp;
	}

	public static void selectionSort(int arr[]) {
		int n = arr.length;
		for (int i = 0; i < n - 1; i++) {
			int minIndex = i;
			for (int j = i + 1; j < n; j++) {
				if (arr[minIndex] > arr[j]) {
					minIndex = j;
				}
			}
			if (i != minIndex) {
				swap(arr, i, minIndex);
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
		selectionSort(arr);
		System.out.println("\nArray after sorting :-");
		display(arr);

	}

}
