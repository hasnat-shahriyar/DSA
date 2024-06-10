# Time Complexity

## Introduction

Time complexity is a crucial concept in computer science and algorithm design. It helps us to analyze the efficiency of an algorithm by determining how the running time of an algorithm increases with the size of the input.

## What is Time Complexity?

Time complexity is a computational complexity that describes the amount of time it takes to run an algorithm. It is usually expressed using Big O notation, which classifies algorithms according to their worst-case or average-case running time.

##

**টাইম কমপ্লেক্সিটি** (Time Complexity) হলো একটি এলগরিদমের কার্যকারিতার একটি পরিমাপ, যা বলে দেয় যে একটি এলগরিদম তার ইনপুটের আকার (input size) অনুসারে কত দ্রুত কাজ সম্পন্ন করতে পারে । এটি এলগরিদমের কার্যকারিতার গাণিতিক বিশ্লেষণের একটি পদ্ধতি ।

সহজ কথায় বলতে গেলে টাইম কমপ্লেক্সিটি বলতে বোঝায় কোনো অ্যালগরিদম কতটা দ্রুত কাজ করে । আমরা একই সমস্যার একাধিক সমাধান এর জন্য টাইম কমপ্লেক্সিটি ব্যবহার করে থাকি ।

**কিভাবে টাইম কমপ্লেক্সিটি বের করা হয়:**

- **প্রথমে**, কোডটি কতগুলো বার **অপারেশন** চালাবে তা গণনা করা হয়।
- **দ্বিতীয়ত**, প্রতিটি অপারেশন কত সময় নেয় তা নির্ধারণ করা হয়।
- **তৃতীয়ত**, সবচেয়ে বেশি সময় নেওয়া অপারেশনের উপর ভিত্তি করে টাইম কমপ্লেক্সিটি নির্ধারণ করা হয়।

**উদাহরণ:**

ধরুন, একটি অ্যালগরিদম আছে যা একটি অ্যারের সকল উপাদানের যোগফল বের করে। অ্যারেটিতে n টি উপাদান আছে।

এই অ্যালগরিদমটি নিম্নলিখিত পদক্ষেপগুলি অনুসরণ করে:

1. অ্যারের প্রথম উপাদানটি ভেরিয়েবলে সংরক্ষণ করুন।
2. অ্যারের দ্বিতীয় উপাদানটি ভেরিয়েবলে যোগ করুন।
3. অ্যারের তৃতীয় উপাদানটি ভেরিয়েবলে যোগ করুন।
4. ...
5. অ্যারের n-তম উপাদানটি ভেরিয়েবলে যোগ করুন।

এই অ্যালগরিদমটিতে, n টি যোগ অপারেশন করা হবে। প্রতিটি যোগ অপারেশন ধ্রুবক সময় নেবে (যেমন, 1 মাইক্রোসেকেন্ড)।

সুতরাং, অ্যালগরিদমটির টাইম কমপ্লেক্সিটি হবে O(n), কারণ n বৃদ্ধির সাথে সাথে যোগ অপারেশনের সংখ্যাও বৃদ্ধি পাবে।

**টাইম কমপ্লেক্সিটি সাধারণত দুটি প্রধান ধরণের হতে পারে:**

1. **Worst-case Time Complexity:** এটি নির্ধারণ করে যে সবচেয়ে খারাপ পরিস্থিতিতে (worst-case scenario) একটি এলগরিদম কতটা সময় নেবে। এটি সেই পরিস্থিতি যেখানে এলগরিদম সবচেয়ে বেশি সময় নেয়।

2. **Average-case Time Complexity:** এটি একটি এলগরিদমের সাধারণ কার্যকারিতা নির্ধারণ করে, যেখানে বিভিন্ন ইনপুটের জন্য এলগরিদমের গড় কার্যকারিতা বিবেচনা করা হয়।

টাইম কমপ্লেক্সিটি সাধারণত বিগ-ও নোটেশন (Big-O Notation) এর মাধ্যমে প্রকাশ করা হয়। বিগ-ও নোটেশন এলগরিদমের টাইম কমপ্লেক্সিটির উপরের সীমা (upper bound) বোঝাতে ব্যবহৃত হয়। উদাহরণস্বরূপ:

- **O(1):** কনস্ট্যান্ট টাইম, ইনপুট সাইজের সাথে সময় বাড়ে না।
- **O(n):** লিনিয়ার টাইম, ইনপুট সাইজের সাথে সরাসরি অনুপাতে সময় বাড়ে।
- **O(n^2):** কোয়াড্রাটিক টাইম, ইনপুট সাইজের বর্গের সাথে সময় বাড়ে।
- **O(log n):** লগারিদমিক টাইম, ইনপুট সাইজের লগারিদমের সাথে সময় বাড়ে।

টাইম কমপ্লেক্সিটি নির্ধারণের মাধ্যমে, ডেভেলপাররা বিভিন্ন এলগরিদমের কার্যকারিতা তুলনা করতে পারে এবং প্রয়োজন অনুযায়ী সবচেয়ে উপযুক্ত এলগরিদমটি বেছে নিতে পারে।

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

## Conclusion

Understanding time complexity is essential for writing efficient algorithms and improving the performance of your code. By analyzing the time complexity of different algorithms, you can make informed decisions about which algorithm to use in a particular scenario.

Feel free to contribute to this repository by adding more examples or improving the explanations!
