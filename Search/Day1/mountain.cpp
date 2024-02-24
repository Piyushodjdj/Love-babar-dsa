#include<iostream>
#include<vector>
using namespace std;
int main()
{


vector<int>arr{1,2,3,4,10,4,3,2};
int s=0;
int e=arr.size()-1;
while(s<e)
{
int mid=s+(e-s)/2;
if(arr[mid]<arr[mid+1])
{
s=mid+1;
}
else 
{
    e=mid;
}
}

cout<<s;

return s;














    return 0;
}