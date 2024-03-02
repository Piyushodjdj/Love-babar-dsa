#include<iostream>
using namespace std;
class dequeue
{

public:
int *arr;
int size;
int fs;
int rs;

//dono side se popo push se kr skteee h
dequeue(int size)
{
this->size=size;
arr=new int[size];
fs=-1;
rs=-1;
}




void pushrear(int data)
{
//QUEUE is full


if(rs==size-1&&fs==0)
{
    cout<<"q is empty";
}

else
//single element case
if(fs==-1&&rs==-1)
{
    rs=fs=0;
    arr[rs]=data;
}

else if(rs=size-1&&fs!=0)
{
    //circular nature
    rs=0;
    arr[rs]=data;
}
else
{
    //normal case
    rs++;
    arr[rs]=data;
}
//normal value
}

void pushfront()
{

























    
}















};

int main()
{

































    return 0;
}