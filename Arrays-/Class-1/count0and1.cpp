#include<iostream>
using namespace std;

int main()
{
int arr[]={0,0,0,0,1,0,1,1,0};
int c0=0;
int c1=0;

for(int i=0;i<9;i++)
{
    if(arr[i]==0)
    {
        c0++;
    }
}
cout<<"zero count is"<<c0<<endl;


for(int i=0;i<9;i++)
{
    if(arr[i]==1)
    {
        c1++;
    }
}
cout<<"zero count is"<<c1;


















    return 0;
}