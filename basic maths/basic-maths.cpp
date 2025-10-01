#include <bits/stdc++.h>
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

void armstrongNum(int n)
{
    int dup = n;
    int sum = 0;
    while (n != 0)
    {
        int lastDigit = n % 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        n = n / 10;
    }
    if (dup == sum)
    {
        cout << "its armstrong";
    }
    else
    {
        cout << "its not armstrong";
    }
};

void printDivisors(int n)
{
    vector<int> ls;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            {
                if (n / i != i)
                    ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls)
        cout << it << " ";
}

void checkPrime(int n)
{
    int counter = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            counter++;
            if (n / i != i)
                counter++;
        }
    }
    if (counter == 2)
    {
        cout << "it is prime";
    }
    else
    {
        cout << "it is not prime";
    }
}

void gcd(int n1, int n2)
{
    int num1, num2;
    if (n1 > n2)
    {
        num1 = n1 - n2;
        num2 = n2;
    }
    else
    {
        num1 = n2 - n1;
        num2 = n1;
    }
    for (int i = min(num1, num2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            cout << "The gcd is " << i;
            break;
        }
    }
}

void effGcd(int n1, int n2)
{
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
        {
            n1 = n1 % n2;
        }
        else
        {
            n2 = n2 % n1;
        }
    }

    if (n1 == 0)
    {
        cout << n2;
    }
    else
    {
        cout << n1;
    }
}
int main()
{
    // int num;
    // cin >> num;

    int n1 = 52;
    int n2 = 10;

    effGcd(n1, n2);
    // checkPrime(num);
}