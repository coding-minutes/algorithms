package sorting;

import java.io.PrintWriter;
import java.io.StringWriter;

import fastIO.ArrayIO;
import fastIO.BasicIO;

/*
 * @Author: Niraj Thagunna
 * 
 * Merge Sort Algorithm - Implementation
 */
public class MergeSort {

	// merge() to merge the solution to sub-problems
	public static void merge(int[] arr, int low, int mid, int high) {

		int n1 = mid - low + 1;
		int n2 = high - mid;

		// creating temp arrays
		int[] L = new int[n1];
		int[] R = new int[n2];

		// Copying data elements to temp arrays
		for (int i = 0; i < n1; i++) {
			L[i] = arr[low + i];
		}

		for (int j = 0; j < n2; j++) {
			R[j] = arr[mid + 1 + j];
		}

		// merging temp arrays

		int i = 0, j = 0;

		int k = low;

		while (i < n1 && j < n2) {

			if (L[i] <= R[j]) {
				arr[k] = L[i];
				i++;
			}
			else {
				arr[k] = R[j];
				j++;
			}
			k++;
		}

		// Copying remaining elements of L[] if any
		while (i < n1) {
			arr[k] = L[i];
			i++;
			k++;
		}

		// Copying remaining elements of R[] if any
		while (j < n2) {
			arr[k] = R[j];
			j++;
			k++;
		}
	}

	// mergeSort() to sort an array
	public static void mergeSort(int[] arr, int low, int high) {

		if (low < high) {

			int mid = low + (high - low) / 2;

			mergeSort(arr, low, mid);
			mergeSort(arr, mid + 1, high);

			merge(arr, low, mid, high);
		}
	}

	// main() method
	public static void main(String[] args) {

		try {
			System.out.print("How many elements do you want to store? ");
			int MAX = BasicIO.nextInt();

			// Creating an array
			int[] arr = ArrayIO.readArray(MAX);

			System.out.println("\nOriginal Array : ");
			ArrayIO.printArray(arr);

			// mergeSort()
			mergeSort(arr, 0, MAX - 1);
			System.out.println("\nArray after sorting - Merge Sort : ");
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





