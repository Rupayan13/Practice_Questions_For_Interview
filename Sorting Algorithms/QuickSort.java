/**
 * 
 */
package sorting_practice;

/**
 * @author Rupayan Dirghangi
 *
 */
public class QuickSort {
	public static void swap(int arr[], int x, int y) {
		int temp = arr[x];
		arr[x] = arr[y];
		arr[y] = temp;
	}

	public static int partition(int arr[], int st, int end) {
		int pivot = arr[st];
		int count = 0;
		for (int i = st + 1; i <= end; i++) {
			if (arr[i] <= pivot) {
				count++;
			}
		}
		int pivotIndex = st + count;
		swap(arr, st, pivotIndex);
		int i = st, j = end;
		while (i < pivotIndex && j > pivotIndex) {
			while (arr[i] <= pivot)
				i++;
			while (arr[j] > pivot)
				j--;
			if (i < pivotIndex && j > pivotIndex) {
				swap(arr, i, j);
			}
		}
		return pivotIndex;
	}

	public static void quickSort(int arr[], int st, int end) {
		if (st >= end)
			return;
		int pi = partition(arr, st, end);
		quickSort(arr, st, pi - 1);
		quickSort(arr, pi + 1, end);
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
		quickSort(arr, 0, arr.length - 1);
		System.out.println("\nArray after sorting :-");
		display(arr);

	}

}
