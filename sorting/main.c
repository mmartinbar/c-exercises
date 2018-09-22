#include <stdio.h>
#include <stdlib.h>

#include "arrays.h"
#include "sorting.h"

////////////////////////////////////////////////////////////
// CONSTANTS 
////////////////////////////////////////////////////////////
#define NUM_ELEMS 10

////////////////////////////////////////////////////////////
// EXTERNAL METHODS IMPLEMENTATION 
////////////////////////////////////////////////////////////
int main(int argc, char* argv[])
{
    // Variable definition section
    int arr[NUM_ELEMS];

    // Generate random array
    fill_arr(arr, NUM_ELEMS);

    // Print unordered array
    printf("Unordered array:\n");
    print_arr(arr, NUM_ELEMS);

    // Order the array
    bubble_sort(arr, NUM_ELEMS);

    // Print ordered array
    printf("Ordered array (%s):\n", is_ordered(arr, NUM_ELEMS)?"yes":"no");
    print_arr(arr, NUM_ELEMS);

    return 0;
}
