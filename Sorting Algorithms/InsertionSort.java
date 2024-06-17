/**
 * 
 */
package sorting_practice;

/**
 * @author Rupayan Dirghangi
 *
 */
public class InsertionSort {
	public static void swap(int arr[], int x, int y) {
		int temp = arr[x];
		arr[x] = arr[y];
		arr[y] = temp;
	}

	public static void insertionSort(int arr[]) {
		int n = arr.length;
		for (int i = 1; i < n; i++) {
			int j = i;
			while (j > 0 && arr[j] < arr[j - 1]) {
				swap(arr, j, j - 1);
				j--;
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
		insertionSort(arr);
		System.out.println("\nArray after sorting :-");
		display(arr);

	}

}
