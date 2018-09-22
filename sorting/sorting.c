#include <stdio.h>
#include <stdlib.h>

#include "arrays.h"

////////////////////////////////////////////////////////////
// INTERNAL METHODS PROTOTYPES
////////////////////////////////////////////////////////////
static void merge(int* arr, int begin, int mid, int end);

////////////////////////////////////////////////////////////
// EXTERNAL METHODS IMPLEMENTATION 
////////////////////////////////////////////////////////////
void bubble_sort(int* arr, int n)
{
    // Variable definition section
    int i, j;
    bool no_swap = true;

    for (i = 0; i < n; i++) {
        // Check if in this iteration has been a swap or not
        no_swap = true;

        for (j = 0; j < (n - i - 1); j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr, n, j, j + 1);
                no_swap = false;
            }
        }

        // Check if no swap (the array is ordered)
        if (no_swap)
            break;
    }
}

void merge_sort(int* arr, int begin, int end)
{
    // Variable definition section
    int mid;

    // Check limits
    if (begin >= end)
        return;

    // Compute mid point
    mid = begin + (end - begin) / 2;

    // Mergesort each half
    merge_sort(arr, begin, mid);
    merge_sort(arr, mid + 1, end);

    // Merge both halves
    merge(arr, begin, mid, end);
}

void heap_sort(int* arr, int begin, int end)
{
}

////////////////////////////////////////////////////////////
// INTERNAL METHODS IMPLEMENTATION 
////////////////////////////////////////////////////////////
void merge(int* arr, int begin, int mid, int end)
{
    // Variable definition section
    int n1 = mid - begin + 1;
    int n2 = end - mid;
    int a1[n1];
    int a2[n2];
    int i;
    int i1 = 0, i2 = 0;

    // Fill both arrays
    for (i = 0; i < n1; i++)
        a1[i] = arr[begin + i];
    for (i = 0; i < n2; i++)
        a2[i] = arr[mid + 1 + i];

    // Fill orig array with ordered elements
    for (i = begin; i <= end; i++) {
        if (i1 >= n1) {
            arr[i] = a2[i2];
            i2++;
        } else if (i2 >= n2) {
            arr[i] = a1[i1];
            i1++;
        } else if (a1[i1] <= a2[i2]) {
            arr[i] = a1[i1];
            i1++;
        } else {
            arr[i] = a2[i2];
            i2++;
        }
    }
}
