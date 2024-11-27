//stack using liked list
#include <iostream>

using namespace std;

// Node
class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
    Node *top;

public:
    Stack()
    {
        top = nullptr;
    }
    // push

    void push(int x)
    {
        Node *newNode = new Node();
        newNode->data = x;
        newNode->next = top;
        top = newNode;

        cout << "Pushed " << x << endl;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow\n";
            return -1;
        }
        Node *temp = top;
        int popValue = top->data;
        top = top->next;
        delete temp;
        return popValue;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }

    void display()
    {
        if (isEmpty())
        {
            if (isEmpty())
            {
                cout << "Stack underflow\n";
                return;
            }
        }
        Node* temp=top;
        cout << "Cureent stack is:\n";
        while (temp!=nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

    int peek()
    {
        return top->data;
    }
};

int main()
{
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.display();
    cout << "peek:" << stack.peek() << endl;
    return 0;
}