#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>arr{10,3,40,20,50,70};
int s=0;
int e=arr.size()-1;
int key=10;
while(s<=e)
{
int mid=s+(e-s)/2;


if(arr[mid]==key)
{
        cout<<mid;
}
else if(mid-1>=0&&arr[mid-1]==key)
{
    cout<<mid;
}
else if(mid+1<=e&&arr[mid+1]==key)
{
    cout<<mid;
}

if(key>arr[mid])
{
    s=mid+2;
}

else
{
    e=mid-2;
}





}






















    return 0;
}