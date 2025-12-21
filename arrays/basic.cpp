#include <bits/stdc++.h>
#include <set>
using namespace std;

bool is_sorted(vector<int> nums)
{
    for (int i = 1; i <= nums.size() - 1; i++)
    {
        if (nums[i] >= nums[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}

// int removeDuplicateInSorted(vector<int> &nums)
// {
//     int len = nums.size();
//     int unique = 1;
//     for (int i = 0; i < len; i++)
//     {
//         unique = unique + i;
//         for (int j = i; j < len; j++)
//         {
//             if (nums[j] != nums[i])
//             {
//                 nums[++i] = nums[j];
//                 break;
//             }
//         }
//     }
//     return unique;
// }

int removeDuplicateInSorted(vector<int> &nums)
{
    int uniqueIndex = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != nums[uniqueIndex])
        {
            nums[uniqueIndex + 1] = nums[i];
            uniqueIndex++;
        }
    }
    return uniqueIndex + 1;
}

int leftRotateBy1(vector<int> &nums)
{
    int temp = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        nums[i - 1] = nums[i];
    }
    nums[nums.size() - 1] = temp;
}

void rotateright(vector<int> &nums, int k)
{
    while (k > 0)
    {
        int temp;
        temp = nums[nums.size() - 1];
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            nums[i + 1] = nums[i];
        }
        nums[0] = temp;
        k--;
    }
}
void rotateLeft(vector<int> &nums, int k)
{
    while (k > 0)
    {
        int temp;
        temp = nums[0];
        for (int i = 1; i <= nums.size() - 1; i++)
        {
            nums[i - 1] = nums[i];
        }
        nums[nums.size() - 1] = temp;
        k--;
    }
}

void rotateLefStriver(vector<int> &nums, int k)
{
    vector<int> temp;
    int n = nums.size();
    for (int i = 0; i < k; i++)
    {
        temp.push_back(nums[i]);
    }

    for (int i = k; i < n; i++)
    {
        nums[i - k] = nums[i];
    }

    for (int i = n - k; i < n; i++)
    {
        nums[i] = temp[i - (n - k)];
    }
}

void moveZeroatEnd_brute(vector<int> nums)
{
    vector<int> temp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            temp.push_back(nums[i]);
        }
    }

    int nz = temp.size();
    for (int i = 0; i < nz; i++)
    {
        nums[i] = temp[i];
    }

    for (int i = nz; i < nums.size(); i++)
    {
        nums[i] = 0;
    }
}

vector<int> moveZerToEnd_optimal(vector<int> &nums)
{
    int j = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            j = i;
            break;
        }
    }

    for (int i = j + 1; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

vector<int> findUnion_brute(vector<int> a, vector<int> b)
{
    int size1 = a.size();
    int size2 = b.size();
    set<int> st;
    vector<int> uni;
    for (int i = 0; i < size1; i++)
    {
        st.insert(a[i]);
    }
    for (int i = 0; i < size2; i++)
    {
        st.insert(b[i]);
    }

    for (int it : st)
    {
        uni.push_back(it);
    }

    return uni;
}

vector<int> findUnion_optimal(vector<int> arr1, vector<int> arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0;
    int j = 0;
    vector<int> uni;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (uni.size() == 0 || uni.back() != arr1[i])
            {
                uni.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (uni.size() == 0 || uni.back() != arr2[j])
            {
                uni.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (uni.size() == 0 || uni.back() != arr1[i])
        {
            uni.push_back(arr1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (uni.size() == 0 || uni.back() != arr2[j])
        {
            uni.push_back(arr2[j]);
        }
        j++;
    }

    return uni;
}

vector<int> intersection_optimal(vector<int> &A, vector<int> &B)
{
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < A.size() && j < B.size())
    {
        if (A[i] < B[j])
        {
            i++;
        }
        else if (A[i] > B[j])
        {
            j++;
        }
        else if (A[i] == B[j])
        {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    };

    return ans;
}

int missingNumber_optimal_sum(vector<int> &nums)
{
    int n = nums.size();
    int sum = n * (n + 1) / 2;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += nums[i];
    }
    int missno = sum - ans;
    return missno;
}

int missingNumber_optimal_xor(vector<int> nums)
{
    int xor1 = 0;
    int xor2 = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        xor1 = xor1 ^ (i + 1);
        xor2 = xor2 ^ nums[i];
    }
    xor1 = xor1 ^ nums.size();

    return xor1 ^ xor2;
}

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int max = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            count++;
            if (count > max)
            {
                max = count;
            }
        }
        else
        {
            count = 0;
        }
    }

    return max;
}

int findNumberAppearOnce_Brute(vector<int> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int num = nums[i];
        int counter = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] == num)
            {
                counter++;
            }
        }
        if (counter == 1)
        {
            return num;
        }
    }
}

int findNumberAppearOnce_better(vector<int> nums)
{
    int maxindex = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        maxindex = max(maxindex, nums[i]);
    }

    int hashmap[maxindex + 1] = {0};

    for (int i = 0; i < nums.size(); i++)
    {
        hashmap[nums[i]]++;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (hashmap[nums[i]] == 1)
        {
            return nums[i];
        }
    }
}

int findNumberAppearsOnce(vector<int> nums)
{
    int xor1 = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        xor1 = xor1 ^ nums[i];
    };

    return xor1;
}

//! Longest subarray with sum k

int longestsubArray(vector<int> &nums, int k)
{
    map<long, int> prefixSum;
    long sum = 0;
    int maxLength = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum == k)
        {
            maxLength = i + 1;
        }
        long rem = sum - k;
        if (prefixSum.find(rem) != prefixSum.end())
        {
            maxLength = i - rem + 1;
        }
    }

    return maxlength
}

int main()
{
    vector<int> arr = {1, 8, 4, 4, 7, 1, 7, 3, 8, 2};
    vector<int> arr2 = {3, 0, 1};
    vector<int> arr3 = {1, 2, 3, 4, 5, 5, 7};
    vector<int> arr4 = {1, 0, 0, 2, 0, 0, 3, 4};

    vector<int> findonce = {2, 2, 4, 1, 4};
    vector<int> longestsubArray_arr = {1, 2, 1, 1, 1, 5, 8};

    cout << longestsubArray(longestsubArray_arr, 3)

        // cout << is_sorted(arr2);
        // cout << removeDuplicateInSorted(arr2) << endl;
        // for (int x : result)
        // {
        //     cout << x << " ";
        // }

        return 0;
}