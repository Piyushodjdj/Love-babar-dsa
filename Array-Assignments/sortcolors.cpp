#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main()
{


vector<int>arr{2,1,0,2,1,1,0};

// sort(arr.begin(),arr.end());


// for(auto i:arr)
// {
//     cout<<i;
// }
// int zerocount,onecount,twocount;
// zerocount=onecount=twocount=0;

// for(int i=0;i<arr.size();i++)
// {
//     if(arr[i]==0)
//     {
//         zerocount++;
//     }
//     else if(arr[i]==1)
//     {
//         onecount++;
//     }
//     else {
//         twocount++;
//     }
// }

// int i=0;

// while(zerocount--)
// {
//     arr[i]=0;
//     i++;
// }
// while(onecount--)
// {
//     arr[i]=1;
//     i++;
// }
// while(twocount--)
// {
//     arr[i]=2;
//     i++;
// }





// for(auto i:arr)
// {
//     cout<<i;
// }




//three pointers


int start=0;
int end=arr.size()-1;
int mid=0;
while(mid<=end)
{
if(arr[mid]==0)
{
    swap(arr[mid],arr[start]);
    start++;
    mid++;
    

}
else if(arr[mid]==1)
{
    mid++;
}
else
if(arr[mid]==2)
{
    swap(arr[mid],arr[end]);
    end--;
}


}
for(auto x:arr)
{
    cout<<x;
}













    return 0;
}