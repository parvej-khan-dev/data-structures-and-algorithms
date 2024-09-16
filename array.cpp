#include <iostream>
#include <algorithm>
using namespace std;

int linerSearch(int arr[], int size, int target)
{
        for (int i = 0; i < size; i++)
        {
                if (arr[i] == target)
                {
                        return i;
                }
        }

        return -1;
}

void reverseArray(int arr[], int size)
{
        int start = 0;
        int end = size - 1;

        while (start < end)
        {
                swap(arr[start], arr[end]);
                start++;
                end--;
        }
        return;
}

int sumOfArrayElement(int arr[], int size)
{
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
                sum += arr[i];
        }

        return sum;
}

void swapMinMaxNumber(int arr[], int sz)
{
        if (sz <= 1)
                return;

        int smallIndex = 0;
        int largeIndex = 0;

        for (int i = 1; i < sz; i++)
        {
                if (arr[i] < arr[smallIndex])
                {
                        smallIndex = i;
                }
                else if (arr[i] > arr[largeIndex])
                {
                        largeIndex = i;
                }
        }

        if (smallIndex != largeIndex)
        {
                swap(arr[smallIndex], arr[largeIndex]);
        }
}

void printUniqeValue(int arr[], int size)
{

        for (int i = 0; i < size; i++)
        {
                int el = arr[i];
                int isUniqe;
                for (int j = 0; j < size; j++)
                {
                        if (i != j && el == arr[j])
                        {
                                isUniqe = false;
                                break;
                        }
                }
                if (isUniqe)
                {
                        cout << el << " ";
                }
        }
};

void printInterSection(int arr1[], int sz1, int arr2[], int sz2)
{

        for (int i = 0; i < sz1; i++)
        {
                bool isInBoth = false;
                for (int j = 0; i < sz2; j++)
                {
                        if (arr1[i] == arr2[j])
                        {
                                isInBoth = true;
                                break;
                        }
                }
                if (isInBoth)
                {
                        cout << arr1[i] << " ";
                }
        }
};
int main()
{
        int arr[5] = {1, 2, 3, 4, 5};
        int size = 5;
        // array properties
        cout << "Size of array: " << sizeof(arr) << endl;
        cout << "Number of elements in array: " << sizeof(arr) / sizeof(int) << endl;
        //     loop on array

        for (int i = 0; i < size; i++)
        {
                cout << arr[i] << endl;
        }

        // smallest element in array
        int smallest = INT_MAX;

        for (int i = 0; i < size; i++)
        {
                // if (arr[i] < min)
                // {
                //         min = arr[i];
                // }
                smallest = min(smallest, arr[i]);
        }
        cout << "smallest element in array " << smallest << endl;

        // largest element in array
        int largest = INT_MIN;
        int largestIndex = -1;
        for (int i = 0; i < size; i++)
        {
                // if (arr[i] > max)
                // {
                //         max = arr[i];
                // }
                /** another way to compare values */
                largest = max(largest, arr[i]);
                if (largest == arr[i])
                {
                        largestIndex = i;
                }
        };
        cout << "largest element in array " << largest << " at index " << largestIndex << endl;

        cout << "find target element index in array:: " << linerSearch(arr, 5, 3) << endl;

        reverseArray(arr, 5);
        cout << "Reversed array: ";
        for (int i = 0; i < 5; i++)
        {
                cout << arr[i] << " ";
        };
        cout << endl;

        // Home Work Questions

        // sum of array products

        cout << "Sum of array element " << sumOfArrayElement(arr, 5) << "\n";

        // WAF to swap the max & min number in array ;
        swapMinMaxNumber(arr, 5);

        for (int i = 0; i < 5; i++)
        {
                cout << arr[i] << " ";
        }
        cout << endl;

        // uniqe value in array
        int my_arr[] = {1, 2, 3, 4, 1, 6};
        printUniqeValue(my_arr, 6);

        int arr1[] = {1, 2, 3, 4, 5};
        int arr2[] = {4, 5, 6, 7, 8};
        cout << "Intersection: ";
        printInterSection(arr1, 5, arr2, 5);
        cout << endl;

        return 0;
};