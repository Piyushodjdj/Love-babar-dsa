#include<iostream>
using namespace std;
class queue
{
public:
int size;
int *arr;
int front;
int rear;



queue(int size)
{
    this->size=size;
    arr=new int[size];
    this->front=-1;
    this->rear=-1;

}




void push(int data)
{

if(rear==size-1&&front==0)
{
    cout<<"queue is empty";
}
else if(front==0&&rear==0)
{
arr[rear]=data;
rear++;
}
else if(rear==size-1&&front!=0)
{
rear=0;
arr[rear]=data;
}
else
{
    rear++;
    arr[rear]=data;
    
}
//agar rear=front-1 hoga uss cas ko kaise handle krenge
}
void pop()
{
if(front==-1)
{
cout<<"cannot be popped";
}

else if(front==rear)
{
    arr[front]=-1;
    front=-1;
    rear=-1;
}
else if(front==size-1) 
{
    front=0;
}
else
{
    front++;
}
}
bool isempty()
{


}

int getsize()
{












}

int getelement()

{










}






};


















int main()
{
    return 0;
}