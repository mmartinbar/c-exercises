#ifndef _ARRAYS_H_
#define _ARRAYS_H_

#include <stdbool.h>

////////////////////////////////////////////////////////////
// EXTERNAL METHODS PROTOTYPES 
////////////////////////////////////////////////////////////

// Function to print array
extern void print_arr(int* arr, int n);

// Function to fill array with random ints
extern void fill_arr(int* arr, int n);

// Swap two indexes of the array
extern void swap(int* arr, int n, int i, int j);

// Check if an array is ordered
extern bool is_ordered(int* arr, int n);

#endif  // _ARRAYS_H_
