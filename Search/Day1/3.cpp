#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int first_occurence(vector<int>arr,int key)
{
int s=0;
int e=arr.size()-1;

int res=-1;

while(s<=e)
{

int m=s+(e-s)/2;


    if(arr[m]==key)
    {
        res=m;
        e=m-1;
    }
    else if(arr[m]>key)
    {
        e=m-1;
    }
    else if(key>arr[m])
    {
        s=m+1;
    }
}
return res;

}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int last_occurrence(vector<int> arr, int key)
{
    int s = 0;
    int e = arr.size() - 1;
    int res = -1;

    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (arr[m] == key)
        {
            res = m;
            s = m + 1;
        }
        else if (arr[m] > key)
        {
            e = m - 1;
        }
        else if (key > arr[m])
        {
            s = m + 1;
        }
    }
    return res;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 4, 4, 7, 8, 9, 10};
    int key = 4;
   cout<<first_occurence(arr,key);
    cout << last_occurrence(arr, key);

    return 0;
}

