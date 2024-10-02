#include <iostream>

#include <vector>

using namespace std;

vector<int> rotateArray(vector<int> arr, int k) {

    while (k > 0) {
        int last = arr.back();

        arr.insert(arr.begin(), last);
        arr.pop_back();

        // add  last element at 0 index

        k--;
    }
    return arr;
}

int main() {

    vector<int> arr = {1, 3, 6, 11, 12, 17};
    int k = 6;

    cout << "Input array is : " << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> arr1 = rotateArray(arr, k);
    cout << "Rotate array is : " << endl;
    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << "  ";
    }
    cout << endl;
    return 0;
}