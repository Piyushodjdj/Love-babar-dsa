#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
vector<int>arr{1,2,4,3,2};
// sort(arr.begin(),arr.end());
while(arr[0]!=arr[arr[0]])
{
    swap(arr[0],arr[arr[0]]);
}
cout<<arr[0];













    return 0;
}