#include <iostream>
using namespace std;

void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "*";
        };
        cout << endl;
    };
};
void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        };
        cout << endl;
    };
};
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        };
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << "*";
        };
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        };
        cout << endl;
    };
};
void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "-";
        };
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        };
        for (int j = 0; j < i; j++)
        {
            cout << "-";
        };
        cout << endl;
    };
};
void pattern9(int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "-";
        };
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        };
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "-";
        };
        cout << endl;
    };
    for (int i = n / 2; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "-";
        };
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        };
        for (int j = 0; j < i; j++)
        {
            cout << "-";
        };
        cout << endl;
    };
};
void pattern10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        };

        cout << endl;
    };
};
void pattern11(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            num = 1;
        else
            num = 0;

        for (int j = 0; j <= i; j++)
        {
            cout << num;
            num = 1 - num;
        }
        cout << endl;
    };
};
void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << "-";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1;
        }

        cout << endl;
    };
};
void pattern13(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    };
};
void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j < 'A' + n - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
};
void pattern16(int n)
{
    for (char i = 'A'; i < 'A' + n; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
};
void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << '-';
        }

        // characters
        char ch = 'A';
        int breakpt = (2 * i + 1) / 2;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            if (j < breakpt)
            {
                ch++;
            }
            else
            {

                ch--;
            }
        }

        // space
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << '-';
        }
        cout << endl;
    };
};
void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + n - i - 1;
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}
void pattern19(int n)
{
    int space = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << "-";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        space += 2;
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        space -= 2;
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << "-";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void pattern20(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < (n - i) * 2; j++)
        {
            cout << "-";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j <= i * 2 - 1; j++)
        {
            cout << "-";
        }

        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << "-";
            }
        }
        cout << endl;
    }
}

void pattern22(int n)
{
    int num = n;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right)));
        }
        cout << endl;
    }
}
int main()
{

    int n;
    cin >> n;

    pattern22(n);

    return 0;
}