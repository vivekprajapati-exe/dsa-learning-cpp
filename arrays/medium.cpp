#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> solution;
    map<int, int> prevData;
    for (int i = 0; i < nums.size(); i++)
    {
        int rem = target - nums[i];
        if (prevData.find(rem) != prevData.end())
        {
            solution.push_back(prevData[rem]);
            solution.push_back(i);
            return solution;
            break;
        }
        prevData[nums[i]] = i;
    }
    return solution;
}

void sortColors(vector<int> &nums)
{
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int MajorityElement_better(vector<int> nums)
{
    map<int, int> MajorMap;
    for (int i = 0; i < nums.size(); i++)
    {
        MajorMap[nums[i]]++;
    }

    for (auto it : MajorMap)
    {
        if (it.second > (nums.size() / 2))
        {
            return it.second;
        }
    }
    return -1;
}

int maxSubarraySum_better(vector<int> nums)
{
    int sum = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        int currentSum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            currentSum += nums[j];
            sum = max(sum, currentSum);
        }
    }

    return sum;
}

//! Kadeance algo
struct MaxSubarrayIndex
{
    int maxSum;
    int ansStart;
    int ansEnd;
};

MaxSubarrayIndex maxSubarraySum_optimal(vector<int> nums)
{

    int maxSum = INT_MIN;
    int sum = 0;
    int start;
    int ansStart;
    int ansEnd;
    for (int i = 0; i < nums.size(); i++)
    {
        if (sum == 0)
            start = i;
        sum += nums[i];

        if (sum > maxSum)
        {
            ansStart = start;
            ansEnd = i;
            maxSum = sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }

    if (maxSum > 0)
    {
        return {maxSum, ansStart, ansEnd};
    }
    else
    {
        return {0, 0, 0};
    }
}

int main()
{
    vector<int> arr = {1, 8, 4, 4, 7, 1, 7, 3, 8, 2};
    vector<int> arr2 = {3, 0, 1};
    vector<int> arr3 = {1, 2, 3, 4, 5, 5, 7};
    vector<int> arr4 = {1, 0, 0, 2, 0, 0, 3, 4};

    vector<int> maxsubarray = {-2, -3, 4, -1, -2, 1, 5, -3};

    vector<int>
        findonce = {2, 2, 4, 1, 4};
    vector<int> longestsubArray_arr = {1, 2, 1, 1, 1, 5, 8};

    MaxSubarrayIndex res = maxSubarraySum_optimal(maxsubarray);
    cout << res.maxSum << "\n startindex  " << res.ansStart << "\n endIndex :" << res.ansEnd;

    return 0;
}