// insert node at the end of list
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

void display(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head = nullptr;
    int arr[] = {10, 20, 30, 40};
    // for (int i = 0; i < 4; i++)
    // {
    //     if (head == nullptr)
    //     {
    //         head = new Node(arr[i]);
    //     }
    //     else
    //     {
    //         Node *tail = head;
    //         while (tail->next != nullptr)
    //         {
    //             tail = tail->next;
    //         }
    //         tail->next = new Node(arr[i]);
    //     }
    // }

    // cout << "current list is:" << endl;
    // display(head);

    // improvised code

    Node *last;
    for (int i = 0; i < 4; i++)
    {
        if (head == nullptr)
        {
            head = new Node(arr[i]);
            last = head;
        }
        else
        {
            last->next = new Node(arr[i]);
            last = last->next;
        }
    }

    cout << "Current list is:\n";
    display(head);
    return 0;
}