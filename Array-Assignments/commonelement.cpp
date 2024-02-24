#include<iostream>
using namespace std;
int main()
{


int arr[]={1,5,10,20,40,80};
int brr[]={6,7,20,40,70};
int crr[]={3,4,15,20,30,70,100};



int i=0,asize=6;
int j=0,bsize=5;
int k=0,csize=7;
while(i<asize||j<bsize||k<csize)
{

if(arr[i]==brr[j]&&brr[j]==crr[k])
{
cout<<arr[i];
i++;
j++;
k++;
}

else if(arr[i]<brr[j])
{
    i++;
}
else if(brr[j]>crr[k])
{
    j++;
}else 
{
    k++;
}










}
















    return 0;
}