/**
 * 
 */
package practiceQuestionOnJava;

/**
 * @author Rupayan Dirghangi
 *
 */
public class RotateTheArrayByK {
	public static void swap(int arr[], int x, int y) {
		int temp = arr[x];
		arr[x] = arr[y];
		arr[y] = temp;
	}

	public static void reverse(int arr[], int l, int r) {
		r--;
		while (l <= r) {
			swap(arr, l, r);
			l++;
			r--;
		}
	}

	public static void rotateTheArrayByKInRight(int arr[], int k) {
		int n = arr.length;
		k %= n;
		reverse(arr, 0, k);
		reverse(arr, k, n);
		reverse(arr, 0, n);
	}

	public static void rotateTheArrayByKInLeft(int arr[], int k) {
		int n = arr.length;
		k %= n;
		reverse(arr, 0, n);
		reverse(arr, 0, k);
		reverse(arr, k, n);
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
		int arr[] = { 1, 2, 3, 4, 5 };
		display(arr);
		rotateTheArrayByKInLeft(arr, 2);
//		rotateTheArrayByKInRight(arr, 2);
		System.out.println();
		display(arr);

	}

}
