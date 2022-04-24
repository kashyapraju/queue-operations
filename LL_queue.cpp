#include<iostream>
using namespace std;

class node
{
   public:
   int data;
   node* next;
   
   node(int var)
   {
       data=var;
       next=NULL;
   }
};

class queue
{
  node* front;
  node* back;

  public:
  queue()
  {
      front= NULL;
      back=NULL;

  }
    void push(int x)
    {
        node* n= new node(x);
        if(front==NULL)
        {
            front=n;
            back=n;
            return;
        }
        back->next=n;
        back=n;

    }
      void pop()
      {
        if(front==NULL)
        {
            cout<<"Queue is empty "<<endl;
            return;
        }
          node* t=front;
          front=front->next;
          delete t;

      }

    int peek()
    {
        if(front==NULL)
        {
            cout<<"Queue is empty "<<endl;
            return -1;
        }

        return front->data;

        
    }

    bool empty()
    {
        if(front==NULL)
        {
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
        return 0;
    
}
