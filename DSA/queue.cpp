#include <iostream>

using namespace std;

class Queue
{
    int *arr;
    int capacity;
    int start, end, length;

public:
    Queue(int size)
    {
        arr = new int[size];
        start = 0;
        end = -1;
        length = 0;
    }

    void push(int x)
    {
        if (isFull())
        {
            cout << "Queue overflowed\n";
            return;
        }
        end = (end + 1) % capacity;
        arr[end] = x;
        length++;
        cout << "Pushed " << x << "\n";
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow\n";
            return -1;
        }
        start = (start + 1) % capacity;
        length--;
        return arr[start];
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack underflow\n";
            return -1;
        }
        return arr[start];
    }

    int size()
    {
        return length;
    }
    bool isFull()
    {
        return start == (end + 2) % capacity;
    }

    bool isEmpty()
    {
        return start == (end + 1) % capacity;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack underflow\n";
            return;
        }
        int i = start;
        cout << "Cureent queue is:\n";
        for (int count = 0; count < length; count++)
        {
            cout << arr[i] << " \n";
            i = (i + 1) % capacity;
        }
    }
};

int main()
{
    Queue queue(6);
    queue.push(20);
    queue.push(30);
    queue.push(40);
    queue.push(50);
    queue.push(60);

    queue.display();
    cout << "Before pop() Size is:" << queue.size() << endl;
    queue.pop();
    queue.pop();

    queue.display();
    cout << "After pop() Size is:" << queue.size() << endl;
    cout<<"Peek is:"<<queue.peek()<<endl;
    return 0;
}