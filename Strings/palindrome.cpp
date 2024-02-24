#include<iostream>
#include<cstring>
using namespace std;



bool palindrome(char arr[])
{

int i=0;
int n=strlen(arr);
int j=n-1;
while(i<=j)
{
    if(arr[i]!=arr[j])
    {
       return false;

    }
else 
{
    i++;
    j--;

}   
}
return true;
}
























int main()
{

char arr[50];
cin.getline(arr,50);


cout<<"palindrome"<<palindrome(arr);












    return 0;
}