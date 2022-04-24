#include <iostream>
using namespace std;

#define n 20

class queue
{
private:
    int front;
    int back;
    int *arr;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "queue overflow " << endl;
        }
        back++;
        arr[back] = x;

        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "no element in the queue " << endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "no element in the queue " << endl;
            return -1;
        }

        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > back)
        {
            cout << "no element in the queue " << endl;
            return true;
        }
        return false;
    }
};

    int main()
    {
        queue rk;
        rk.push(4);
        rk.push(7);
        rk.push(8);
        rk.push(3);

        cout << rk.peek() << endl;
        rk.pop();
        cout << rk.peek() << endl;
        rk.pop();

        
        cout << rk.peek() << endl;
        rk.pop();
        cout << rk.peek() << endl;
        rk.pop();

        cout << rk.empty() << endl;
    
}