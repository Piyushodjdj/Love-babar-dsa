#include<iostream>
using namespace std;
class Stack
{

public:

int *arr;
int size;
int top;


Stack(int size)
{

    this->size=size;
    this->top=-1;
    arr=new int[size];
}

void push(int data)
{
    if(size-top>1)
    {
        top++;
        arr[top]=data;
    }
    else
    {
        cout<<"not possible";
    }
}

void pop()
{

if(top==-1)
{
    cout<<"Nhi hoga";
}
else
{
    top--;
}
}

int gettop()
{
    if(top==-1)
    {
        cout<<"nhi hoga";
       
    }

    else
    {
        return arr[top];
    }
}



bool isempty()
{
    if(top==-1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}



int getsize()
{
    return top+1;
}
};
int main()
{




  Stack s(6);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    while (!s.isempty()) {
        cout << s.gettop() << " ";
        s.pop();
    }









    return 0;
}