#ifndef _SORTING_H_
#define _SORTING_H_

////////////////////////////////////////////////////////////
// EXTERNAL METHODS PROTOTYPES 
////////////////////////////////////////////////////////////

// Function to sort an array using bubble sort algorithm
// time complexity: O(n^2) at worst
// space complexity: O(1)
extern void bubble_sort(int* arr, int n);

// Function to sort an array using merge sort algorithm
// time complexity: O(nlogn)
// space complexity: O(n)
extern void merge_sort(int* arr, int begin, int end);

// Function to sort an array using heap sort algorithm
// time complexity:
// space complexity:
extern void heap_sort(int* arr, int begin, int end);

#endif // _SORTING_H_

