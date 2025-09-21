#include <iostream>
#include <cmath>
using namespace std;

void printNum(int n)
{
    while (n > 0)
    {
        int indieNum = n % 10;
        cout << indieNum;
        n = n / 10;
    }
}
void countDigit(int n)
{
    int counter = 0;
    while (n > 0)
    {
        counter = counter + 1;
        n = n / 10;
    }
    cout << "the digits are " << counter;
}

void printNumRev(int n)
{
    int revNum = 0;
    while (n > 0)
    {
        int tempNum = n % 10;
        // cout << tempNum;
        n = (int)n / 10;
        revNum = (revNum * 10) + tempNum;
    }
    cout << revNum;
}
bool isPalindrome(int x)
{
    int dup = x;
    int rev = 0;
    while (x > 0)
    {
        int ld = x % 10;
        x = x / 10;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && ld > 7))
            return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && ld < -8))
            return 0;

        rev = (rev * 10) + ld;
    }
    if (dup == rev)
    {
        return true;
    }
    else
    {
        return false;
    };
}

int main()
{
    int n = 7789;

    printNumRev(n);
}