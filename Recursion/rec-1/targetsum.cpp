#include<iostream>
#include<limits>
using namespace std;
#include<vector>

int solve(vector<int>& arr,int target)
{

//base case
if(target==0)
{
    return;
}

for(int i=0;i<arr.length();i++)
{
ans=solve(arr,target-arr[i]);
}

}










int main()
{
vector<int>arr{1,2};
int target=5;
int ans=solve(arr,target);
cout<<"Answer is"<<ans;













    return  0;
}