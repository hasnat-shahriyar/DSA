#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // O(1): Reading the integer n

    // This loop starts from 1 and multiplies i by 2 in each iteration until i <= n.
    for (int i = 1; i <= n; i = i * 2) // O(log N): Loop runs log2(n) times
    {
        cout << i << endl; // O(1): Printing the current value of i
    }

    return 0;
}
