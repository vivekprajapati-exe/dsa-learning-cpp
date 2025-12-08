#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{

    for (int i = n - 1; i >= 0; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[i])
            {
                swap(arr[j], arr[i]);
                didSwap = 1;
            }
        }
        if (didSwap == 0)
            break;
    }
}

void bubble_sort_rev(int arr[], int n)
{
    bool didSwap = false;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = true;
            }
        }

        if (!didSwap)
        {
            return;
        }
    }
}

void bubble_sort_recursion(vector<int> &arr)

    int main()
{
    // Your code here
    int n;
    cout << "lenght of array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubble_sort_rev(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}