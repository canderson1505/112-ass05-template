// Corey Anderson
// CSCI 112 Fall 2026
// "I acknowledge that I have worked on this
// assignment independently, except where explicitly noted and referenced.
// Any collaboration or use of external resources has been properly cited.
// I am fully aware of the consequences of academic dishonesty and agree to
// abide by the university's academic integrity policy.";

// code.c — student implementation only
 

/*
 * To use the function prototypes from code.h, you must include the header:
 *   #include "code.h"
 *  
 * 
 * You also need stdio.h for any input/output operations.
 *   #include <stdio.h>
 * 
 * Write your function implementations below each TODO.
 */
#include "code.h"
#include <stdio.h>



/*
 * ============================================================================
 * FUNCTION: find_max
 * ============================================================================
 * 
 * Find the maximum value in an array.
 * Start with the first element and compare with the rest.
 */
int find_max(int arr[], int n)
{
   int max = arr[0];
   
   for (int i = 1; i < n; i++) 
   {
        if (arr[i] > max)
        {
            max = arr[i];
        }
            
     }
    
   return max; 
}

/*
 * ============================================================================
 * FUNCTION: find_min
 * ============================================================================
 * 
 * Find the minimum value in an array.
 * Start with the first element and compare with the rest.
 */
int find_min(int arr[], int n)
{
    int min = arr[0];

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < min) 
        {
            min = arr[i];
        }
        
    }   
return min;
}

/*
 * ============================================================================
 * FUNCTION: sum_array
 * ============================================================================
 * 
 * Sum all elements in the array.
 * Use a running total and add each element.
 */
long sum_array(int arr[], int n)
{
    long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];

    }
    return sum;
}

/*
 * ============================================================================
 * FUNCTION: average
 * ============================================================================
 * 
 * Calculate the average of a float array.
 * Sum all elements and divide by the count.
 */
double average(float arr[], int n)
{
double sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum / n;
}


/*
 * ============================================================================
 * FUNCTION: linear_search
 * ============================================================================
 * 
 * Find the INDEX (position) of a target value in an array.
 * 
 * Why WHILE loop? Because we don't know how many elements we'll check
 * before finding the target (or reaching the end). It could be the first
 * element, or the last element, or not there at all!
 * 
 * Search for a target value in the array.
 * Return the index if found, -1 if not found.
 * Use while loop because you don't know when to stop.
 */
int linear_search(int arr[], int n, int target)
{
    int i = 0;

    while (i < n)
    {
        if (arr[i] == target)
        {
            return i;
        }

        i++;
    }

    return -1;

}


/*
 * ============================================================================
 * FUNCTION: heron
 * ============================================================================
 * 
 * Calculate the square root of a number using Heron's method.
 * 
 * Start with an initial guess (x/2), then repeatedly improve it:
 *   next_guess = (guess + x/guess) / 2.0
 * 
 * Stop when the difference between consecutive guesses is smaller than epsilon.
 * Remember: no abs() or fabs() - use: if (x < 0) x = -x;
 */
double heron(double x, double epsilon)
{
    double guess = x / 2.0;
    double prev_guess;
    double diff;

    if (x == 0) 
    {
        return 0;
    }
    if (x < 0)
    {
        return -1;
    }

    while (1) 
    {

        
        prev_guess = guess;
        
        guess = (guess + x / guess) / 2.0;

        diff = guess - prev_guess;

        if (diff < 0)
        {
            diff = -diff;
        }

        if (diff < epsilon)
        {
            break;
    

        }
    }
    return guess;
}

//commit


