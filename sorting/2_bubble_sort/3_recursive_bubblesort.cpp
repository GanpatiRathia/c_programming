/*Recursive Bubble Sort
Background :
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
Example:
First Pass:
( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.
( 1 5 4 2 8 ) –> ( 1 4 5 2 8 ), Swap since 5 > 4
( 1 4 5 2 8 ) –> ( 1 4 2 5 8 ), Swap since 5 > 2
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.

Second Pass:
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 )
( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
Now, the array is already sorted, but our algorithm does not know if it is completed. The algorithm needs one whole pass without any swap to know it is sorted.



Third Pass:
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )

Following is iterative Bubble sort algorithm :

// Iterative Bubble Sort
bubbleSort(arr[], n)
{
  for (i = 0; i < n-1; i++)      

     // Last i elements are already in place   
     for (j = 0; j  arr[j+1])
         swap(arr[j], arr[j+1]);
} 

 

How to implement it recursively?
Recursive Bubble Sort has no performance/implementation advantages, but can be a good question to check one’s understanding of Bubble Sort and recursion.

If we take a closer look at Bubble Sort algorithm, we can notice that in first pass, we move largest element to end (Assuming sorting in increasing order). In second pass, we move second largest element to second last position and so on.

Recursion Idea.

1 Base Case: If array size is 1, return.
2 Do One Pass of normal Bubble Sort. This pass fixes last element of current subarray.
3 Recur for all elements except last of current subarray.
*/

// C/C++ program for recursive implementation 
// of Bubble sort 
#include <bits/stdc++.h> 
using namespace std; 

// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
	// Base case 
	if (n == 1) 
		return; 

	// One pass of bubble sort. After 
	// this pass, the largest element 
	// is moved (or bubbled) to end. 
	for (int i=0; i<n-1; i++) 
		if (arr[i] > arr[i+1]) 
			swap(arr[i], arr[i+1]); 

	// Largest element is fixed, 
	// recur for remaining array 
	bubbleSort(arr, n-1); 
} 

/* Function to print an array */
void printArray(int arr[], int n) 
{ 
	for (int i=0; i < n; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

// Driver program to test above functions 
int main() 
{ 
	int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	bubbleSort(arr, n); 
	printf("Sorted array : \n"); 
	printArray(arr, n); 
	return 0; 
} 

