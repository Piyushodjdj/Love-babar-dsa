#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
vector<int>arr{1,5,3,4,3,5,6};
unordered_map<int,int>hash;

for(int i=0;i<7;i++)
{
     hash[arr[i]]++;
}
for(int i=0;i<7;i++)
{

if(hash[arr[i]]>1)
{
    cout<<i;
    cout<<arr[i];
    
}
}
return 0;
}