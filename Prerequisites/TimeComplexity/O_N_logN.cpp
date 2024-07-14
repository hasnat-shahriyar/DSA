#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // O(1): Reading the integer n

    // Outer loop runs from 0 to n, hence O(N)
    for (int i = 0; i <= n; i++)
    {
        int x = i;
        // Inner loop processes each digit of x, taking O(log10(i)) time
        while (x > 0)
        {
            int digit = x % 10;   // O(1): Extracting the last digit
            cout << digit << " "; // O(1): Printing the digit
            x /= 10;              // O(1): Removing the last digit
        }
        cout << endl; // O(1): Printing a newline
    }
    return 0;
}
