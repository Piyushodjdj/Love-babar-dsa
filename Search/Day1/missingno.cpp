#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5,6,7, 8,  10};
    

    int s=0;
    int e=arr.size()-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;



      if(arr[mid]-arr[mid-1]!=arr[mid+1]-arr[mid])
      {
        cout<<arr[mid]+1;
        break;
      }

 if(arr[mid]-arr[s]!=mid-s)
 {
  e=mid-1;
 }
 else
 {
s=mid+1;
 }


      







    }

    return 0;
}
