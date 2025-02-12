#include<iostream>
using namespace std;
#define N 5

class Stack
{
  public:
    int top;
    int arr[N];

    Stack()
    {
      top = -1;
    }
    void push();
    void pop();
    void display();
    void peak();
    void isFull();
    void isEmpty();
};

void Stack::push()
{
  int ele;
  if(top == N-1)
  {
    cout<<"Stack overflow!"<<endl;
  }
  else{
    cout<<"Enter element : ";
    cin>>ele;
    top++;
    arr[top] = ele;
  }
}

void Stack::pop()
{
  if(top == -1)
  {
    cout<<"Stack underflow!"<<endl;
  }
  else{
    cout<<"Popped element is : "<<arr[top]<<endl;
    top--;
  }
}

void Stack::display()
{
  if(top == -1)
  {
      cout<<"Stack is empty!"<<endl;
  }
  else{
     cout<<"Stack elements are"<<endl;
     for(int i=top; i>=0; i--)
     {
        cout<<arr[i]<<endl;
     }
  }
}

void Stack::peak()
{
  if(top < 0)
  {
    cout<<"Stack is empty"<<endl;
  }
  else{
    int x = arr[top];
    cout<<"Top element is : "<<x<<endl;
  }
}

void Stack::isFull()
{
  if(top == N-1)
  {
    cout<<"Stack is full"<<endl;
  }
}

void Stack::isEmpty()
{
  if(top < 0)
  {
    cout<<"Stack is empty"<<endl;
  }
}

int main()
{
  class Stack ob;
  int ch;
  do{
    cout<<"1. Push"<<endl;
    cout<<"2. Pop"<<endl;
    cout<<"3. Display"<<endl;
    cout<<"4. Display Peak"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter your choice : ";
    cin>>ch;

    switch(ch)
    {
      case 1 : ob.push();
      break;
      case 2 : ob.pop();
      break;
      case 3 : ob.display();
      break;
      case 4 : ob.peak();
      break;
      case 5 : cout<<"Exit"<<endl;
      break;
    }
  }
  while(ch!=5);
  return 0;
}