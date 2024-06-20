#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // O(1): Reading the integer n

    // Loop runs approximately sqrt(n) times, hence O(sqrt(n))
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0) // O(1): Checking if i is a divisor of n
        {
            cout << i << " ";         // O(1): Printing the divisor
            if (n / i != i)           // O(1): Checking if the paired divisor is different
                cout << n / i << " "; // O(1): Printing the paired divisor
        }
    }
    cout << endl; // O(1): Printing a newline

    return 0;
}
