#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // O(1): Reading the integer n

    int ar[n]; // O(1): Declaring an array of size n

    // Loop runs n times, hence O(n)
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i]; // O(1) each time, total O(n)
    }

    int s = 0; // O(1): Initializing the sum variable

    // Loop runs n times, hence O(n)
    for (int i = 0; i < n; i++)
    {
        s = s + ar[i]; // O(1) each time, total O(n)
    }

    cout << s << endl; // O(1): Printing the sum
    return 0;
}
