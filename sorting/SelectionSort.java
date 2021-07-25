package sorting;

import java.io.PrintWriter;
import java.io.StringWriter;

import fastIO.ArrayIO;
import fastIO.BasicIO;

// Selection Sort Algorithm - Implementation
public class SelectionSort {

	// selectionSort() to sort an array 
	public static void selectionSort(int[] arr, int n) {

		for (int i = 0; i < n - 1; i++) {

			int min = i;

			for (int j = i + 1; j < n; j++) {

				if (arr[j] < arr[min])
					min = j;
			}

			if (min != i) {
				int temp = arr[i];
				arr[i] = arr[min];
				arr[min] = temp;
			}
		}
	}

	// main() or driver method
	public static void main(String[] args) {
		try {
			System.out.print("How many elements do you want to store? ");
			int MAX = BasicIO.nextInt();

			// Creating an array
			int[] arr = ArrayIO.readArray(MAX);

			System.out.println("\nOriginal Array : ");
			ArrayIO.printArray(arr);

			// calling the selectionSort() method
			selectionSort(arr, MAX);
			System.out.println("\nArray after sorting - Selection Sort : ");
			ArrayIO.printArray(arr);
		}
		catch (Exception ex) {
			StringWriter sw = new StringWriter();
			PrintWriter pw = new PrintWriter(sw);
			ex.printStackTrace(pw);
			String error = sw.toString();
			System.out.println("Error : \n" + error);
		}
	}
}






