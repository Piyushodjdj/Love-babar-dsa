#include<iostream>
using namespace std;
class Stack
{
public:
int *arr;
int size;
int top1;
int top2;

Stack(int size)
{
this->size=size;
arr=new int[size];
this->top1=-1;
this->top2=size;

}

void push1(int data)
{
if(top2-top1==1)
{
    cout<<"Space is not avialable"<<endl;
    
}
else
{
        top1++;
    arr[top1]=data;
    
}
}



void push2(int data)
{
    if(top2-top1==1)
{
    cout<<"Space is not avialable"<<endl;
    
}
else
{
        top2--;
    arr[top2]=data;
    
}
}

void pop1()
{
    if(top1==-1)
    {
        cout<<"underflow";
    }
    else
    {
    top1--;
    }
}

void pop2()
{
    if(top2==size)
    {
        cout<<"underflow";
    }
    else
    {
    top2++;
    }
}




};
int main()
{

Stack s(10);











s.push1(10);
s.push1(20);
s.push1(30);
s.push1(10);
s.push1(20);
s.push2(30);
s.push2(30);
s.push2(30);
s.push2(30);
s.push2(30);

















    return 0;
}