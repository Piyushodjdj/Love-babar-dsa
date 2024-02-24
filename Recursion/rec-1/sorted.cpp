#include<iostream>
#include<vector>
using namespace std;

bool sorted(vector<int> &arr ,int& size,int i)
{
if(i==size-1)
{
    return true;
}

if(arr[i+1]<arr[i])
{
    return false;
}
return sorted(arr,size,i+1);
}
int main()
{
vector<int>arr{2,6,7,9,12,11};

int size=arr.size();
int i=0;
if(sorted(arr,size,i))
{
    cout<<"True";
}
else
{
    cout<<"false";
}










    return 0;
}