#include <iostream>
using namespace std;

void printf(int count)
{
    if (count == 4)
        return;
    cout << count;
    count++;
    printf(count);
}

void printName(int i, int n)
{
    if (i > n)
        return;
    cout << "Vivek" << i << endl;
    printName(i + 1, n);
}

void linear(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    linear(i + 1, n);
}

void pRev(int i, int n)
{
    if (i < 1)
        return;
    cout << n;
    pRev(i - 1, n);
}

void backtracklinear(int i, int n)
{
    if (i < 1)
        return;
    backtracklinear(i - 1, n);
    cout << i;
}

void backTrackRev(int i, int n)
{
    if (i > n)
        return;
    backTrackRev(i + 1, n);
    cout << i;
}

void sumofN(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    sumofN(i - 1, sum + i);
    cout << sum << endl;
}

int functionalSum(int n)
{
    if (n < 0)
    {
        return 0;
    }
    return (n + functionalSum(n - 1));
}
int factorialN(int n)
{
    if (n == 1)
    {
        return n;
    }
    return (n * factorialN(n - 1));
}

// void revArr(int arr[], int left, int right)
// {
//     if (left >= right)
//     {
//         return; // Base case: nothing more to reverse
//     }
//     swap(arr[left], arr[right]);
//     revArr(arr, left + 1, right - 1);
// }

void revArr(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    revArr(i + 1, arr, n);
}
void palindrome(int i, string text, int n)
{
    if (i >= n / 2)
    {
        return;
    }
    if (text[i] == text[n - i - 1])
    {
        palindrome(i + 1, text, n);
        cout << "it is palindrome";
    }
    else
    {
        cout << "not palindrome" << text;
    }
}

int fibonaciNo(int n)
{
    fo
}

int main()
{
    // dont manipulate the users actual data instead take a other var you dont wand to lose all the data of user if they have precious data and for your calcuations
    string name;
    cin >> name;
    palindrome(0, name, name.length());

    return 0;
}
