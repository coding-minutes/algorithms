package sorting;

import java.io.PrintWriter;
import java.io.StringWriter;

import fastIO.ArrayIO;
import fastIO.BasicIO;

/*
 * @Author: Niraj Thagunna
 * 
 * Quick Sort Algorithm - Implementation
 */
public class QuickSort {

	// swap() method to swap the two numbers
	public static void swap(int[] arr, int i, int j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	// partition() method that returns the position of the pivot element 
	public static int partition(int[] arr, int low, int high) {

		int pivot = arr[high];
		int i = low - 1;

		for (int j = low; j <= high - 1; j++) {

			if (arr[j] <= pivot) {
				i++;
				swap(arr, i, j);
			}
		}

		// taking the pivot element at it's correct position
		swap(arr, i + 1, high);

		// return the position of the pivot element
		return i + 1;
	}

	// quickSort() to sort an array
	public static void quickSort(int[] arr, int low, int high) {

		if (low < high) {

			int pos = partition(arr, low, high);

			quickSort(arr, low, pos - 1);
			quickSort(arr, pos + 1, high);
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

			// quickSort()
			quickSort(arr, 0, MAX - 1);
			System.out.println("\nArray after sorting - Quick Sort : ");
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





