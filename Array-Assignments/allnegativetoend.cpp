#include<iostream>
using namespace std;
int main()
{

int arr[]={1,2,-3,4,-5,6};

int s=0,e=5;

int i=0;
while(i<=e)
{
if(arr[i]>0)
{
    i++;
}

else if(arr[i]<0)
{
    swap(arr[i],arr[e]);
    i++;
    e--;
}
}
for(int i=0;i<6;i++)
{
    cout<<arr[i];
}
    return 0;
}