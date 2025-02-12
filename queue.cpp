#include<iostream>
using namespace std;
#define N 5

class Queue
{
    public:
        int front, rear, q[N];

        Queue()
        {
            front = -1;
            rear = -1;
        }
        void enqueue();
        void dequeue();
        void display();
        void displayRear();
        void isFull();
        void isEmpty();
};

void Queue::enqueue()
{
    int ele;
    if(rear == N-1)
    {
        cout<<"Queue overflow"<<endl;
    }
    else{
        if(front == -1){
            front=0;
        }
        cout<<"Enter the element : ";
        cin>>ele;
        rear++;
        q[rear] = ele;
    }
    cout<<endl;
}

void Queue::dequeue()
{
    if(front == -1 && front > rear)
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Deleted element is : "<<q[front]<<endl;
        front++;
    }
}

void Queue::display()
{
    if(front == -1 || front > rear)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    int  i = front;
    while(i <= rear){
        cout<<q[i++]<<"  ";
    }
    cout<<endl;
}

void Queue::displayRear()
{
    if(front == -1 || front > rear)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    else{
        cout<<"Last element is : "<<q[rear]<<endl;
    }
}

void Queue::isFull()
{
    if(rear == N-1)
    {
        cout<<"Queue is full"<<endl;
    }
    else{
        cout<<"Queue is not full"<<endl;
    }
}

void Queue::isEmpty()
{
    if(front == -1 && front > rear)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
}

int main()
{
    class Queue ob;
    int ch;
    do{
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Display rear element"<<endl;
        cout<<"5. isFull"<<endl;
        cout<<"6. is Empty"<<endl;
        cout<<"7. Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>ch;

        switch(ch)
        {
            case 1 : ob.enqueue();
            break;
            case 2 : ob.dequeue();
            break;
            case 3 : ob.display();
            break;
            case 4 : ob.displayRear();
            break;
            case 5 : ob.isFull();
            break;
            case 6 : ob.isEmpty();
            break;
            case 7 : cout<<"Exit";
            break;
        }
    }
    while(ch!=7);
    return 0;
}