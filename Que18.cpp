/*
F 502 Percentage of Vowels
Bunny has a string. Bunny likes vowel and dislikes consonants so he would like to know what percentage of the characters in the string are vowels.

Input Format

Only one line of input that contains one string.

Constraints

One string that only contains lowercase or uppercase letters. The length of this string will not be greater than 100.

Output Format

Output the required percentage upto 4 decimal places.

Sample Input 0

bunnyyisastringlover
Sample Output 0

30.0000
Explanation 0

total characters : 20 vowels : 6 percentage = (6/20)*100 = 30
*/
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string a;
    cin >> a;
    int i, x = a.length();
    float z = 0.0000, v = 0.0;
    for (i = 0; i < x; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            v = v + 1;
        }
    }
    z = (v / x) * 100;
    cout << fixed << setprecision(4) << z << endl;

    return 0;
}