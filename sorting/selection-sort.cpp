#include <bits/stdc++.h>
using namespace std;
void selection_sort1(int unsorted[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (unsorted[j] < unsorted[min])
            {
                min = j;
            }
        }
        // Swap after finding minimum
        int temp = unsorted[min];
        unsorted[min] = unsorted[i];
        unsorted[i] = temp;
    }
}

void selection_sort_selfwritten(vector<int> &arr)
{
    int len = arr.size();

    for (int i = 0; i <= len - 2; i++)
    {
        int min = i;
        for (int j = i; j <= len - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

int main()
{
    //! Selection sort
    int n;
    cout << "lenght of array :";
    cin >> n;
    vector<int> arr = {10, 8, 123, 0, 9};

    selection_sort_selfwritten(arr);

    for (int num : arr)
    {
        cout << num << " ";
    }

    return 0;
}