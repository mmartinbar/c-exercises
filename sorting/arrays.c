#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <time.h>

#include "arrays.h"

////////////////////////////////////////////////////////////
// EXTERNAL METHODS IMPLEMENTATION 
////////////////////////////////////////////////////////////
void print_arr(int* arr, int n)
{
    // Variable definition section
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

void fill_arr(int* arr, int n)
{
    // Variable definition section
    int i;

    // Init seed
    srand(time(0));

    // Fill array with rand numbers
    for (i = 0; i < n; i++)
        arr[i] = rand() % 100;
}

void swap(int* arr, int n, int i, int j)
{
    // Variable definition section
    int elem;

    // Check input params
    if (i < 0 || i >= n || j < 0 || j >= n)
       return;

    // Swap contents
    elem = arr[i];
    arr[i] = arr[j];
    arr[j] = elem;
}


bool is_ordered(int* arr, int n)
{
    // Variable definition section
    int i;

    for (i = 0; i < (n - 1); i++) {
        if (arr[i] > arr[i + 1])
            return false;
    }

    return true;
}

