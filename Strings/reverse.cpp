#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char arr[50];
cin.getline(arr, 50);
int i=0;
int j=strlen(arr)-1;
while(i<=j)
{
char temp;
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
i++;
j--;
}

cout<<arr;


















}