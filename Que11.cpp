/*
Alice and Boat Trips
Alice owns a company that transports tour groups between two islands. She has n trips booked, and each trip has pi passengers. Alice has m boats for transporting people, and each boat's maximum capacity is c passengers.

Given the number of passengers going on each trip, determine whether or not Alice can perform all n trips using no more than m boats per individual trip. If this is possible, print Yes; otherwise, print No.

Input Format

The first line contains three space-separated integers describing the respective values of n (number of trips), c (boat capacity), and m (total number of boats). The second line contains n space-separated integers describing the values of p0, p1, p2... pn-1

Constraints

1 <= n,c,m <= 100 1 <= pi <= 100

Output Format

Print Yes if Alice can perform all n booked trips using no more than m boats per trip; otherwise, print No.

Sample Input 0

5 2 2
1 2 1 4 3
Sample Output 0

Yes
Explanation 0

image

Sample Input 1

5 1 2
1 2 1 4 1
Sample Output 1

No
Explanation 1
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main()
{
    int n;
    int c;
    int m;
    int max = 0;
    cin >> n >> c >> m;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];

        if (max < p[i])
            max = p[i];
    }

    int mul = c * m;
    if (mul >= max)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}