#include<iostream>
using namespace std;
int main()
{

int arr[]={1,2,3,4,5,6,7,8,90,98};



int i=0;
int l=9;

while(i<l)
{


int temp=arr[i];
arr[i]=arr[l];

arr[l]=temp;
i++;
l--;

}



for(int i=0;i<10;i++)
{
    cout<<arr[i];
}




    return 0;
}