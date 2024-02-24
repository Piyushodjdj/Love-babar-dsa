#include<iostream>
using namespace std;
void search(int arr[],int key)
{
    for(int i=0;i<7;i++)
    {
        if(arr[i]==key)

        {
            cout<<"key is found at"<<i;
        }
    }
}
int main()
{

int arr[]={2,9,6,7,4,12,15};
int key=7;


search(arr,9);

















    return 0;
}