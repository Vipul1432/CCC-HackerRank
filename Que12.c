/*
Arrays - DS
An array is a type of data structure that stores elements of the same type in a contiguous block of memory. In an array, , of size , each memory location has some unique index,  (where ), that can be referenced as  or .

Reverse an array of integers.

Note: If you've already solved our C++ domain's Arrays Introduction challenge, you may want to skip this.

Example

Return .

Function Description

Complete the function reverseArray in the editor below.

reverseArray has the following parameter(s):

int A[n]: the array to reverse
Returns

int[n]: the reversed array
Input Format

The first line contains an integer,N, the number of integers in A.
The second line contains N space-separated integers that make up A.

Constraints
1 <= N<= 10^3;
1 A[i] <= 10^4 Where the A[i] is the ith integer in A.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    int i = 0;
    int array[1000];
    for (i; i < n; i++)
    {
        scanf("%d ", &array[i]);
    }
    i = n - 1;
    for (i; i > -1; i--)
    {
        printf("%d ", array[i]);
    }
    return 0;
}