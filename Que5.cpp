// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

int isprm(int n)
{
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }

    return 1;
}

int countprime(int n)
{
    int count = 0;

    vector<int> primevector;

    for (int i = 2; i <= n; i++)
    {

        if (isprm(i) == 1)
        {
            primevector.push_back(i);
        }
    }

    int sum = primevector[0];

    for (int i = 1;
         i < primevector.size(); i++)
    {

        sum += primevector[i];
        if (sum > n)
            break;
        if (isprm(sum) == 1)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int N;
    cin >> N;
    cout << countprime(N);

    return 0;
}
