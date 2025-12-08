#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {6, 2, 8, 25, 8};
    int largest = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << largest;

    return 0;
}