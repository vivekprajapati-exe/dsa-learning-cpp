#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class singlyll
{
private:
    Node *head;

public:
    singlyll()
    {
        head = NULL;
    }

    void insertAtBeginning(int val)
    {
        Node *createNode = new Node();
        createNode->data = val;
        createNode->next = head;
    }

    void insertAtEnd(int val)
    {
        Node *createNode = new Node();
        createNode->data = val;
        createNode->next = NULL;

        if (!head)
        {
            head = createNode;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = createNode;
    }

    void insertAtPosition(int pos, int val)
    {
        if (pos < 1)
        {
            cout << "put a valid position";
            return
        }
        if (pos == 1)
        {
            insertAtBeginning(val);
            return;
        }

        Node *newNode = new Node();
        newNode->data = val;
        Node *temp = head;
        for (int i = 0; i < pos; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
};

int main()
{
    int x = 9;
    cout << *ptr;

    return 0;
}