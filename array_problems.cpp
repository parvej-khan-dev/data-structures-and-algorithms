#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// max sum of sub-array with kadan's algo
int maxSubArraySum(int arr[], int size)
{

        int max_sum = INT_MIN;
        int current_sum = 0;
        for (int i = 0; i < size; i++)
        {
                current_sum += arr[i];
                max_sum = max(current_sum, max_sum);
                if (current_sum < 0)
                {
                        current_sum = 0;
                }
        }
        return max_sum;
}
vector<int> twoSum(vector<int> &nums, int target)
{
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
                for (int j = i + 1; j < nums.size(); j++)
                {
                        if (nums[i] + nums[j] == target)
                        {
                                ans.push_back(i);
                                ans.push_back(j);
                                return ans;
                        }
                }
        }
        return ans;
}

vector<int> twoSumWithTwoPointer(vector<int> &nums, int target)
{
        vector<int> ans;
        int start = 0;
        int end = nums.size() - 1;

        while (start < end)
        {
                int pair_sum = nums[start] + nums[end];
                if (pair_sum > target)
                {
                        end--;
                }
                else if (pair_sum < target)
                {
                        start++;
                }
                else
                {
                        ans.push_back(start);
                        ans.push_back(end);
                }
        }

        return ans;
}
// Check majority element in array
int morreAlog(vector<int> &nums)
{

        int ans = 0, fq = 0, n = nums.size();
        for (int i = 1; i < n; i++)
        {
                if (fq == 0)
                {
                        ans = nums[i];
                }
                if (ans == nums[i])
                {
                        fq++;
                }
                else
                {
                        fq--;
                }
        }

        int count = 0;
        for (int val : nums)
        {
                if (ans == val)
                {
                        count++;
                }
        }
        if (count >= n / 2)
        {
                return ans;
        }
        return -1;
}

int main()
{
        // maximum of sub-array
        int arr[1] = {-1};
        int n = 1;

        vector<int> majorityArray; // Declare an empty vector
        majorityArray.push_back(3);
        majorityArray.push_back(2);
        majorityArray.push_back(3);

        vector<int> v1 = {1, 2, 3, 1, 1, 2};
        int result = morreAlog(v1);

        cout << result << " Majority element in array" << endl;

        cout << maxSubArraySum(arr, n) << endl;

        return 0;
}
