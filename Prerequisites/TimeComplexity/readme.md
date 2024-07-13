# Time Complexity

## Introduction

Time complexity is a crucial concept in computer science and algorithm design. It helps us to analyze the efficiency of an algorithm by determining how the running time of an algorithm increases with the size of the input.

## What is Time Complexity?

Time complexity is a computational complexity that describes the amount of time it takes to run an algorithm. It is usually expressed using Big O notation, which classifies algorithms according to their worst-case or average-case running time.

- Time complexity does not refer to the actual time it takes to execute code. Instead, it measures the number of steps or operations an algorithm performs on a specific machine.

##

**টাইম কমপ্লেক্সিটি** (Time Complexity) হলো একটি এলগরিদমের কার্যকারিতার একটি পরিমাপ, যা বলে দেয় যে একটি এলগরিদম তার ইনপুটের আকার (input size) অনুসারে কত দ্রুত কাজ সম্পন্ন করতে পারে । এটি এলগরিদমের কার্যকারিতার গাণিতিক বিশ্লেষণের একটি পদ্ধতি ।

সহজ কথায় বলতে গেলে টাইম কমপ্লেক্সিটি বলতে বোঝায় কোনো অ্যালগরিদম কতটা দ্রুত কাজ করে । আমরা একই সমস্যার একাধিক সমাধান এর জন্য টাইম কমপ্লেক্সিটি ব্যবহার করে থাকি ।

**কিভাবে টাইম কমপ্লেক্সিটি বের করা হয়:**

- **প্রথমে**, কোডটি কতবার **অপারেশন** চালাবে তা গণনা করা হয় ।
- **দ্বিতীয়ত**, প্রতিটি অপারেশন কত সময় নেয় তা নির্ধারণ করা হয় ।
- **তৃতীয়ত**, সবচেয়ে বেশি সময় নেওয়া অপারেশনের উপর ভিত্তি করে টাইম কমপ্লেক্সিটি নির্ধারণ করা হয় ।

**টাইম কমপ্লেক্সিটি সাধারণত দুটি প্রধান ধরণের হতে পারে:**

1. **Worst-case Time Complexity:** এটি নির্ধারণ করে যে সবচেয়ে খারাপ পরিস্থিতিতে (worst-case scenario) একটি এলগরিদম কতটা সময় নেবে । এটি সেই পরিস্থিতি যেখানে এলগরিদম সবচেয়ে বেশি সময় নেয় ।

2. **Average-case Time Complexity:** এটি একটি এলগরিদমের সাধারণ কার্যকারিতা নির্ধারণ করে, যেখানে বিভিন্ন ইনপুটের জন্য এলগরিদমের গড় কার্যকারিতা বিবেচনা করা হয় ।

টাইম কমপ্লেক্সিটি সাধারণত বিগ-ও নোটেশন (Big-O Notation) এর মাধ্যমে প্রকাশ করা হয় । বিগ-ও নোটেশন এলগরিদমের টাইম কমপ্লেক্সিটির উপরের সীমা (upper bound) বোঝাতে ব্যবহৃত হয় । উদাহরণস্বরূপ:

- **O(1):** কনস্ট্যান্ট টাইম, ইনপুট সাইজের সাথে সময় বাড়ে না ।
- **O(n):** লিনিয়ার টাইম, ইনপুট সাইজের সাথে সরাসরি অনুপাতে সময় বাড়ে ।
- **O(n^2):** কোয়াড্রাটিক টাইম, ইনপুট সাইজের বর্গের সাথে সময় বাড়ে ।
- **O(log n):** লগারিদমিক টাইম, ইনপুট সাইজের লগারিদমের সাথে সময় বাড়ে ।

টাইম কমপ্লেক্সিটি নির্ধারণের মাধ্যমে, ডেভেলপাররা বিভিন্ন এলগরিদমের কার্যকারিতা তুলনা করতে পারে এবং প্রয়োজন অনুযায়ী সবচেয়ে উপযুক্ত এলগরিদমটি বেছে নিতে পারে ।

##

### Big O Notation

Big O notation provides an upper bound on the growth rate of an algorithm's running time. Here are some common Big O complexities:

- **O(1)**: Constant time
- **O(log n)**: Logarithmic time
- **O(n)**: Linear time
- **O(n log n)**: Linearithmic time
- **O(n^2)**: Quadratic time
- **O(2^n)**: Exponential time

## Example

### Constant Time - O(1)

This algorithm runs in constant time regardless of the size of the input.

```cpp
#include <iostream>
using namespace std;

void printFirstElement(int arr[], int n) {
    cout << "First element: " << arr[0] << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printFirstElement(arr, 5);
    return 0;
}
```

### Linear Time - O(n)

This algorithm runs in linear time, which means the running time increases linearly with the size of the input.

```cpp
#include <iostream>
using namespace std;

void printAllElements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printAllElements(arr, 5);
    return 0;
}
```

### Quadratic Time - O(n^2)

This algorithm runs in quadratic time, which means the running time increases quadratically with the size of the input.

```cpp
#include <iostream>
using namespace std;

void printAllPairs(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "(" << arr[i] << ", " << arr[j] << ") ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printAllPairs(arr, 5);
    return 0;
}
```

### Exponential Time - O(2^n)

This algorithm runs in exponential time, which means the running time doubles with each additional element in the input.

```cpp
#include <iostream>
using namespace std;

void printBinary(int n, string prefix) {
    if (n == 0) {
        cout << prefix << endl;
    } else {
        printBinary(n - 1, prefix + "0");
        printBinary(n - 1, prefix + "1");
    }
}

int main() {
    int n = 3; // Number of bits
    printBinary(n, "");
    return 0;
}
```

#

#

### Time Complexity

Time complexity is a way to express how the runtime of an algorithm grows as the size of the input grows. It helps us understand how an algorithm's speed scales with larger inputs.

1. **O(N)**: Linear Time

   - **Example**: Going through all the elements in a list.
   - **Explanation**: If you have 10 elements, it takes 10 steps. If you have 100 elements, it takes 100 steps. The time grows linearly with the number of elements.

2. **O(log N)**: Logarithmic Time

   - **Example**: Binary search.
   - **Explanation**: If you have 10 elements, it might take about 3 steps; if you have 100 elements, it might take about 7 steps. The time grows much slower than the number of elements. Each step typically cuts the problem size in half.

3. **O(√N)**: Square Root Time

   - **Example**: Some algorithms in number theory.
   - **Explanation**: If you have 100 elements, it might take about 10 steps; if you have 10,000 elements, it might take about 100 steps. The time grows with the square root of the number of elements.

4. **O(N²)**: Quadratic Time

   - **Example**: Nested loops, like checking all pairs in a list.
   - **Explanation**: If you have 10 elements, it takes 100 steps; if you have 100 elements, it takes 10,000 steps. The time grows with the square of the number of elements.

5. **O(N log N)**: Linearithmic Time
   - **Example**: Efficient sorting algorithms like mergesort and heapsort.
   - **Explanation**: If you have 10 elements, it might take about 30 steps; if you have 100 elements, it might take about 700 steps. The time grows faster than linear but slower than quadratic.

### Space Complexity

Space complexity refers to the amount of memory an algorithm uses as the size of the input grows. It includes both the memory needed to store the input data and the memory needed for the algorithm to run.

- **Example**:
  - An algorithm that simply reads a list and prints each element has O(N) space complexity because it needs space for the list.
  - An algorithm that creates a new list to store results also has O(N) space complexity because it needs additional space proportional to the input size.
  - An algorithm that only uses a few extra variables has O(1) space complexity, meaning it uses a constant amount of space regardless of input size.

### Summary

- **O(N)**: Time grows linearly with input size.
- **O(log N)**: Time grows logarithmically (much slower).
- **O(√N)**: Time grows with the square root of input size.
- **O(N²)**: Time grows quadratically with input size.
- **O(N log N)**: Time grows faster than linear but slower than quadratic.

Space complexity tells us how much memory an algorithm needs relative to the input size.

I hope this helps! Let me know if you have any questions or need more examples.

## Conclusion

Understanding time complexity is essential for writing efficient algorithms and improving the performance of your code. By analyzing the time complexity of different algorithms, you can make informed decisions about which algorithm to use in a particular scenario.

Feel free to contribute to this repository by adding more examples or improving the explanations!
