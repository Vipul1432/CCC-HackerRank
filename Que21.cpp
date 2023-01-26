#include <iostream>
using namespace std;

void Compare(int val1, int val2)
{

    if (val1 < val2)
        cout << "Value 2 is greater" << endl;
    else if (val1 > val2)
        cout << "Value 1 is greater" << endl;
    else
        cout << "Both Values are equal" << endl;
}

int main()
{
    int val1, val2;
    cin >> val1 >> val2;
    Compare(val1, val2);

    return 0;
}