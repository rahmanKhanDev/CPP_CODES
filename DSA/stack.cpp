// stack using array
#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int capacity;
    int top;

public:
    // constructor
    Stack(int size)
    {
        arr = new int[size];
        capacity = size;
        top = -1;
    }
    // destructor
    ~Stack()
    {
        delete[] arr;
    }

    // push()
    void push(int x)
    {
        if (isFull())
        {
            cout << "Stack overflow.Element can not pushed\n";
            return;
        }
        arr[++top] = x;
        cout << "Pushed " << x << " to the stack\n";
    }

    // pop()
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow.stack is empty\n";
            return -1;
        }
        return arr[top--];
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack underflow.stack is empty\n";
            return -1;
        }

        return arr[top];
    }

    // check is stack full
    bool isFull()
    {
        return top == capacity - 1;
    }

    // check if empty
    bool isEmpty()
    {
        return top == -1;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return;
        }
        cout << "\nCurrent stack is:\n";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    Stack stack(5); // stack of size 5

    // push
    stack.push(100);
    stack.push(200);
    stack.push(300);

    stack.display();
    stack.pop();
    stack.display();
    stack.pop();
    stack.display();

    if (stack.isEmpty())
    {
        cout << "Stack is empty\n";
    }
    else
    {
        cout<<"\nStack is not empty\n";
    }
    stack.display();
    return 0;
}