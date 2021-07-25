package sorting;

import java.io.PrintWriter;
import java.io.StringWriter;

import fastIO.ArrayIO;
import fastIO.BasicIO;

/*
 * @Author: Niraj Thagunna
 * 
 * Bubble Sorting Algorithm - Implementation
 */
public class BubbleSort {
	
	// method to sort an array using Bubble Sorting Algorithm
	public static void bubbleSort(int[] arr, int n) {
		
		// loop for the number of passes
		for (int i = 0; i < n - 1; i++) {
			
			boolean flag = false;
			
			// loop for the iteration or comparing the pairs of adjacent elements
			for (int j = 0; j < n - 1 - i; j++) {
				
				if (arr[j] > arr[j + 1]) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
					flag = true;
				}
			}
			
			// if no-swapping then break the loop
			if (flag == false)
				break;
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
			
			// calling the bubble sort algorithm
			bubbleSort(arr, MAX);
			System.out.println("\nArray after sorting - Bubble Sort : ");
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







