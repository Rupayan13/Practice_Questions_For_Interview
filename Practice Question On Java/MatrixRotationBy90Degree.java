/**
 * 
 */
package practiceQuestionOnJava;

/**
 * @author Rupayan Dirghangi
 *
 */
public class MatrixRotationBy90Degree {
	public static void swap(int arr[], int x, int y) {
		int temp = arr[x];
		arr[x] = arr[y];
		arr[y] = temp;
	}

	public static void reverseArray(int arr[], int l, int r) {
		r--;
		while (l <= r) {
			swap(arr, l, r);
			l++;
			r--;
		}
	}

	public static void transposeInPlace(int arr[][], int r, int c) {
		for (int i = 0; i < r; i++) {
			for (int j = i; j < c; j++) {
				int temp = arr[i][j];
				arr[i][j] = arr[j][i];
				arr[j][i] = temp;
			}
		}
	}

	public static void matrixRotationBy90DegreeCLK(int arr[][], int r, int c) {
		if (r != c) {
			System.out.println("Rotation is not possible.");
			return;
		}
		transposeInPlace(arr, r, c);
		for (int i = 0; i < r; i++) {
			reverseArray(arr[i], 0, arr[i].length);
		}
	}

	public static void matrixRotationBy90DegreeACLK(int arr[][], int r, int c) {
		if (r != c) {
			System.out.println("Rotation is not possible.");
			return;
		}
		for (int i = 0; i < r; i++) {
			reverseArray(arr[i], 0, arr[i].length);
		}
		transposeInPlace(arr, r, c);
	}

	public static void display(int arr[][]) {
		for (int i = 0; i < arr.length; i++) {
			for (int j = 0; j < arr[i].length; j++) {
				System.out.print(arr[i][j] + " ");
			}
			System.out.println();
		}
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[][] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
		display(arr);
//		matrixRotationBy90DegreeCLK(arr, arr.length, arr[0].length);
		matrixRotationBy90DegreeACLK(arr, arr.length, arr[0].length);
		System.out.println();
		display(arr);

	}

}
