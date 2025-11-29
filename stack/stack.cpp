#include <iostream>
using namespace std;
#define MAX 5

class Stack
{
private:
    int top;
    int arr[MAX];

public:
    Stack()
    {

        top = -1;
    }

    void push(int val)
    {
        if (top == MAX - 1)
        {
            cout << "\n Stack overflow";
        }
        arr[++top] = val;
        cout << "\n stack push " << val;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "\n Stack undeflow";
        }
        cout << arr[--top] << "is removed \n";
    }
    void peek()
    {
        cout << "\n the top most element is " << arr[top];
    }
    void display()
    {
        cout << "\n ====Stack display from top top bottom====";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.pop();
    s.pop();
    s.pop();
    s.peek();
    s.display();

    return 0;
}