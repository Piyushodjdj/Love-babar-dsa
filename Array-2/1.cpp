#include<iostream>
using namespace std;
int main()
{
int arr[3][3];
cout<<"Enter the number";
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cin>>arr[i][j];
    }
}
int max=0;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(arr[i][j]>max)
        {
            max=arr[i][j];
        }
    }
}

cout<<"max no is"<<max;









    return 0;
}