/*
 * code.h - Header file for Lab 3
 * 
 * Instructions:
 * 1. At the top, add include guards to prevent multiple inclusion:
 *    #ifndef CODE_H
 *    #define CODE_H
 * 
 * 2. Write the function prototypes below
 * 
 * 3. At the bottom, add:
 *    #endif
 */
#ifndef CODE_H
#define CODE_H
/*
 * Find the maximum value in an array
 * Parameters: arr (pointer to array), n (number of elements)
 * Returns: the largest integer value
 */
int find_max(int arr[], int n);

/*
 * Find the minimum value in an array
 * Parameters: arr (pointer to array), n (number of elements)
 * Returns: the smallest integer value
 */
int find_min(int arr[], int n);

/*
 * Sum all elements in an integer array
 * Parameters: arr (pointer to array), n (number of elements)
 * Returns: the sum as a long integer (to prevent overflow)
 */
long sum_array(int arr[], int n);

/*
 * Calculate the average of a floating-point array
 * Parameters: arr (pointer to float array), n (number of elements)
 * Returns: the arithmetic mean as a double
 */
double average(float arr[], int n);

/*
 * Search for a target value in an array
 * Parameters: arr (pointer to array), n (number of elements), target (value to find)
 * Returns: the index if found, or -1 if not found
 */
int linear_search(int arr[], int n, int target);

/*
 * Calculate sin(x) using Taylor series expansion
 * Parameters: x (angle in radians), epsilon (accuracy threshold)
 * Returns: the sine value approximated to within epsilon accuracy
 */
double heron(double x, double epsilon);

#endif
/*
 * Remember to add #endif at the end!
 */