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

int main()
{
    int n = 7789;

    countDigit(n);
}