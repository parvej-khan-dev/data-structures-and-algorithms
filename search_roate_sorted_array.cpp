#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> arr, int target) {
    int start = 0, end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        //  check is left part is sorted and not if left part is sorted then apply binary search
        if (arr[start] <= arr[mid]) { // left part is sorted
            if (arr[start] <= target && target <= arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }

        } else { // right part is sorted
            if (arr[mid] <= target && target <= arr[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main() {

    vector<int> arr = {1, 3, 5};

    int result = search(arr, 5);

    cout << result << endl;

    return 0;
}
