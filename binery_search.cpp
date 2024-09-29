#include <iostream>
#include <vector>
using namespace std;

// binary search approach

/****
 *  Topic covered
 *
 *  1. What is Binary search
 *  2. Real life example of binary search ex. dictionary
 *  3. binary search approach
 *  4. binary search code implementations
 *  5. overflow optimization
 *  6. binary search time complexity
 *  7. binary search with recursion
 *
 */

int binary_search(vector<int> arr, int target) {

    int start = 0;
    int end = arr.size() - 1;
    // int mid = (start + end) / 2;

    // optimize code here for
    /***
     * start can be max INT_MAX
     * end can be max INT_MAX
     * sum of start and end can be max INT_MAX that can be overflow our int value here
     *
     */
    int mid = start + (end - start) / 2;

    cout << mid << " mid value" << endl;

    while (start <= end) {
        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            start = mid + 1;
        }

        if (arr[mid] > target) {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

/***
 * Time Complexity : O(log(n))
 * Space Complexity : O(1)
 */

// Time Complexity Calculation
/***
 *    n = 10 ; - 1/2^0
 *  second iteration  =   1/2^(1)
 *  third iteration   =   1/2^(2)
 *  .
 *  .
 *  ..
 *  last iteration    =   1/2^(k)
 *
 *  sum of :
 *
 *   n/2^(k) = 1
 *   k = log(n) // base 2 ignore
 *
 * and final time complexity is log(n)
 *
 */

int binary_search_recursive(vector<int> arr, int target, int start, int end) {
    int mid = start + (end - start) / 2;

    if (start <= end) {
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] > target) {
            return binary_search_recursive(arr, target, start, end = mid - 1);
        }
        if (arr[mid] < target) {
            return binary_search_recursive(arr, target, start = mid + 1, end);
        }
    }

    return -1;
}

int main() {

    vector<int> arr = {-1, 4, 5, 7, 10, 23};

    // int result = binary_search(arr, 10);
    int result = binary_search_recursive(arr, 10, 0, arr.size() - 1);

    cout << result << endl;

    return 0;
}
