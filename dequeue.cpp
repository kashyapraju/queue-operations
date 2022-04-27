#include <iostream>
using namespace std;

#define MAX 100

class deque
{
    int front;
    int rear;
    int size;
    int arr[MAX];

public:
    deque(int size)
    {
        front = -1;
        rear = 0;
        size = size;
    }

    void inserctionfront(int key)
    {
        if (full())
        {
            cout << "overflow condition " << endl;
        }

        if (front == 0)
        {
            front = size - 1;
        }
        else if (front == -1)
        {
            front == 0;
            rear = 0;
        }

        else
        {
            front = front - 1;
        }

        arr[front] = key;
    }

    void inserctionrear(int key)
    {
        if (full())
        {
            cout << "overflow condition " << endl;
        }

        if (front == -1)
        {
            rear = 0;
            front = 0;
        }
        else if (rear == size - 1)
        {
            rear = 0;
        }

        else
        {
            rear = rear + 1;
        }

        arr[rear] = key;
    }
    // void deletfront();
    // void deletrear();
    bool full()
    {

        return (front == 0 && rear == (size - 1) || (front == rear + 1));
    }

    bool empty()
    {

        return (front == -1);
    }

    int getfront()
    {
        if(empty())
        {
            cout<<"is empty "<<endl;
            return -1;
        }
        return arr[front];
    }
    // int getre
};

int main()
{
    deque rk(5);
    rk.inserctionfront(7);
    rk.inserctionfront(8);
    rk.getfront();

    return 0;
}