/*
F M02 - Transpose 1

Write a program that accepts an NxN matrix as input and prints its transpose.

Details about transpose : https://en.wikipedia.org/wiki/Transpose

Note that you also have to take as input N, the size of the matrix.

Hint : Every element a[i][j] in old matrix becomes a[j][i] in transpose matrix Base Code :

Sample Input 0

3
1 2 3
4 5 6
7 8 9
Sample Output 0

1 4 7
2 5 8
3 6 9
 */

#include <stdio.h>

int main()
{
    int n, c, d, N, matrix[N][N], transpose[N][N];

    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d", &n);

    printf("Enter the elements of matrix\n");

    for (c = 0; c < n; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &matrix[c][d]);

    for (c = 0; c < n; c++)
        for (d = 0; d < n; d++)
            transpose[d][c] = matrix[c][d];

    printf("Transpose of entered matrix :-\n");

    for (c = 0; c < n; c++)
    {
        for (d = 0; d < n; d++)
            printf("%d\t", transpose[c][d]);
        printf("\n");
    }
    return 0;
}
