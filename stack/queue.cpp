#include <iostream>
#include <queue>
using namespace std;
class Queue
{

    int *arr;
    int front;
    int rear;
    int cap;
public:
    Queue(int size)
    {
        this->cap = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int val)
    {
        // full case
        if (front == 0 && rear == cap - 1 || front - rear == 1)
        {
            cout << "queue is overflow" << endl;
        }
        // inserting first element
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = val;
        }
        else
        {

            arr[++rear] = val;
        }
    }

    int dequeue()
    {
        // empty
        if (front  == -1)
        {
            cout << "queue underflow" << endl;
        } // simgle element
        else if (front == rear)
        {
            int v = arr[front];
            rear--;
            front--;
            return v;
        }
        else
        {
            int v = arr[front];
            front++;
            return v;
        }
        return -1;
    }

    int size(){
         if (front = rear == -1)
        {
           return 0;
        }
        else{
            return rear-front +1;
        }

    }
};
int main()
{
    Queue q1(10);
    q1.enqueue(12);
      q1.enqueue(13);
        q1.enqueue(14);
        cout<<q1.dequeue();
        cout<<q1.dequeue();
        cout<<q1.dequeue();
        cout<<q1.dequeue();

    return 0;
}