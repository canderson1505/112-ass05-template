/*
 * main.c - Sandbox for testing
 * 
 * To use the functions you implemented in code.c, you must include the header:
 *   #include "code.h"
 * 
 * This tells the compiler where to find the function prototypes.
 * Without this include, the compiler won't know about your functions!
 */

#include <stdio.h>
#include "code.h"
int main(void)
{
    int arr[] = {5, 2, 8, 1, 9};

    printf("Max: %d\n", find_max(arr, 5));

    printf("Min: %d\n", find_min(arr, 5));

    printf("Sum: %ld\n", sum_array(arr, 5));

    float farr[] = {2.0f, 4.0f, 6.0f};

    printf("Average: %f\n", average(farr, 3));

    printf("Search for 8: %d\n", linear_search(arr, 5, 8));

    printf("Search for 7: %d\n", linear_search(arr, 5, 7));

    printf("Square root of 4: %f\n", heron(4.0, 0.0001));

    printf("Square root of 2: %f\n", heron(2.0, 0.0001));
    
        return 0;
}