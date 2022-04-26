#include <bits/stdc++.h>
using namespace std;

class c_queue
{
private:
    int front, rear;
    int *arr;
    int size;

public:
    c_queue(int size)
    {
        front = -1;
        rear = -1;
        size = size;
        arr = new int[size];
    }

    void enqueue(int value)
    {

        if ((front == (rear + 1)) || ((front == 0) && (rear == size - 1)))
        {
            printf("overflow Error\n");
        }
        else

        {
            if (rear == -1)
            {
                rear = 0;
                front = 0;
                arr[rear] = value;
            }
            else
            {
                rear = (rear + 1) % size;
                arr[rear] = value;
            }
        }
    }

    void show()
    {
        if (front == -1)
        {
            cout << "Empty sorry " << endl;
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                i = i % size;
                cout << arr[i] << endl;
            }
        }
    }

    void dequeue()
    {
        if (front == -1)
        {
            cout << "Empty sorry " << endl;
        }
        else
        {
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front = (front + 1) % size;
            }
        }
    }

    
};

int main()
{
    c_queue q(6);
    q.enqueue(6);
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(3);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.enqueue(9);

    // cout<<q.enqueue(3);
    q.show();
    return 0;
}