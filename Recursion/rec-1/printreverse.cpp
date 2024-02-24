#include<iostream>
using namespace std;



void print(int n)
{
if(n==0)
{
    
    return ;
}
int digits=n%10;
cout<<digits;
print(n/10);

}
int main()
{
int n;
cout<<"Enter the number";
cin>>n;
print(n);
return 0;
}