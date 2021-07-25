package sorting;

import java.io.PrintWriter;
import java.io.StringWriter;

import fastIO.ArrayIO;
import fastIO.BasicIO;

// Insertion Sort Algorithm - Implementation
public class InsertionSort {

	// method for insertion sort algorithm
	public static void insertionSort(int[] arr, int n) {

		for (int i = 1; i < n; i++) {

			int temp = arr[i];
			int j = i - 1;

			while (j >= 0 && arr[j] > temp) {
				arr[j + 1] = arr[j];
				j--;
			}

			arr[j + 1] = temp;
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

			// calling the insertion sort method
			insertionSort(arr, MAX);
			System.out.println("\nArray after sorting - Insertion Sort : ");
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





