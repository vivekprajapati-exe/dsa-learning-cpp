#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {6, 2, 8, 25, 8, 7};
    int largest = arr[0];
    int secLargest = -1;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > largest)
        {
            secLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secLargest && arr[i] < largest)
        {
            secLargest = arr[i];
        }
    }

    cout << secLargest;
    return 0;
}