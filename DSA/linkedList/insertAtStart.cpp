// insert at start of ll
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

// display list
void display(Node *head)
{
    cout << "Current list is:\n";
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " " << endl;
        current = current->next;
    }
}

int main()
{

    int arr[] = {2, 4, 6, 8, 10};
    // check if node is present or not
    Node *head;
    head = nullptr;
    for (int i = 0; i < 5; i++)
    {
        if (head == nullptr) // if empty then create new node
        {
            head = new Node(arr[i]);
            // cout << head->data;
        }
        else
        {
            // insert at begining
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = head;
            head = temp;
        }
    }
    display(head);
    return 0;
}