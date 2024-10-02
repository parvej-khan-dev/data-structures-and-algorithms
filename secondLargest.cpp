// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

int findSecondLargestElement(vector<int> &arr, int n) {
    if (n < 2) {
        return -1;
    }

    int maxLargest = INT_MIN;
    int foundDiff = false;

    for (int value : arr) {
        maxLargest = max(maxLargest, value);
    }
    int second = INT_MIN;
    for (int value : arr) {
        if (value != maxLargest) {
            second = max(second, value);
            foundDiff = true;
        }
    }

    return foundDiff ? second : -1;
}

int main() {
    // Write C++ code here

    vector<int> arr = {-3, -3, -3, -3, -3};

    int result = findSecondLargestElement(arr, arr.size());
    cout << result << endl;

    cout << "Try programiz.pro";

    return 0;
}