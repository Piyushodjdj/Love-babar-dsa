#include<iostream>
#include<vector>
using namespace std;
//negative in left and positve in right
int main()
{




vector<int>arr{-1,2,3,-5,-6,7,-8};

//first sort the array in assending order or decreasing orderr
//dutchnational flag algorithm

int l=0;
int hi=arr.size()-1;

while(l<hi)
{

if(arr[l]<0)
{
    l++;
}
else
{
    if(arr[hi]>0)
    {
        hi--;
    }
    else
    {
        swap(arr[l],arr[hi]);
    }
}



}





  for (auto x : arr) {
        cout << x << " ";
    }


































    return 0;
}