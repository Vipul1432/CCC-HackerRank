/*
F 501 : String Sans Accent
There's a Bug who loves strings but hates vowels. He wants to delete all the vowels from a string. Can you do it for him?

Input Format

One line of input that contains the string S.

Constraints

1 <= |S| <= 10^5

Output Format

One string, the string S without vowels.

Sample Input 0

bugshatesvowels
Sample Output 0

bgshtsvwls
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str[1000];
    scanf("%s", str);
    int i = 0;
    while (str[i])
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            i++;
        }
        else
        {
            printf("%c", str[i]);
            i++;
        }
    }

    return 0;
}
