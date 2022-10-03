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

#include <stdio.h><br>
#include <string.h><br>
#include <math.h><br>
#include <stdlib.h><br>

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


#Question 2 : Watermelon

One a hot summer day Aarti and her friend Anurag decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion. After that the watermelon was weighed, and the scales showed w kilos. They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.

Aarti and Anurag are great fans of even numbers, that's why they want to divide the watermelon in such a way that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal.

They are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.

Input Format

The first (and the only) input line contains integer number w — the weight of the watermelon bought by them.

Constraints

1 ≤ w ≤ 100

Output Format

Print YES, if they can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.

Sample Input 0

8
Sample Output 0

YES
Explanation 0

The boys can divide the watermelon into two parts of 2 and 6 kilos respectively (another variant — two parts of 4 and 4 kilos) */

##Solution :


#include <stdio.h><br>
#include <string.h><br>
#include <math.h><br>
#include <stdlib.h><br>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    if (n <= 2)
    {
        printf("NO");
    }
    else if (n % 2 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}



#Question 3 :

Given a decimal number N, you need to find the number of bases 1 < b <= n such that when the number N is represented in base 'b', it ends in a zero.

Input Format

Input contains only one number, N.

Constraints

1 <= N <= 10000

Output Format

Output one number, the number of bases b such that when number N is represented in base b, the number contains a trailing zero.

Sample Input 0

12
Sample Output 0

5
Explanation 0

Base : Number :
2 1100
3 110
4 30
5 22
6 20
7 15
8 14
9 13
10 12
11 11
12 10

12 ends with a zero in 5 different number systems - 2,3,4,6 and 12. Hence the is 5  */

##Solution :

#include <stdio.h><br>
#include <string.h><br>
#include <math.h><br>
#include <stdlib.h><br>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int count = 0;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if ((n % i) == 0)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}



