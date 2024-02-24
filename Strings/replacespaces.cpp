#include<iostream>
#include<cstring>
using namespace std;
int main()
{

char arr[50];
cin.getline(arr,50);

int i=0;
int n=strlen(arr);

for(int i=0;i<n;i++)
{
    if(arr[i]==' ')
    {
        arr[i]='@';
    }
}



cout<<arr;












}