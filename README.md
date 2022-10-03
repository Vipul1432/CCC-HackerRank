# CCC-HackerRank
CCC HackerRank Problem with solution

#Question 1 : Add  Two Number


Given two values, they can be integer or floating point numbers, add them.

Input Format

Two values separated by a space.

Constraints

No constraints.

Output Format

One value, the result of sum of two input values.

Sample Input 0

5 4
Sample Output 0

9
Explanation 0

5 + 4 = 9

##Solution 

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float a, b;
    scanf("%f%f", &a, &b);

    long int c = a + b;

    if (c < (a + b))

        printf("%.2f", a + b);

    else

        printf("%ld", c);

    return 0;
}


#Question 2 : 
