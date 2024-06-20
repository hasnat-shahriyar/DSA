#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // O(1): Reading the integer n

    // Loop runs log10(n) times, hence O(log n)
    while (n > 0)
    {
        int digit = n % 10;   // O(1): Extracting the last digit
        cout << digit << " "; // O(1): Printing the digit
        n = n / 10;           // O(1): Removing the last digit
    }

    return 0;
}
