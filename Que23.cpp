#include <bits/stdc++.h>
#include <iostream>
#include <bitset>
using namespace std;

// string xoring (string a, string b, int n) {
//     string ans = "";

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == b[i])
//             ans += "0";
//         else
//             ans += "1";
//     }
//     return ans;
// }

int findBits(int x, int y)
{
    return (x | y) - (x & y);
}

int main()
{
    int x, y;
    cin >> x;
    cin >> y;
    // int n = x.length();
    //     string c = xoring(a, b, n);
    //     cout << c << endl;
    // }

    cout << bitset<8>(findBits(x, y));
}