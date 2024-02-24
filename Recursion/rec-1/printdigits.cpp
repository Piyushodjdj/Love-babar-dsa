#include<iostream>
using namespace std;
void print(int n)
{
if(n==0)
{
    return ;
}
int digits=n%10;
print(n/10);
cout<<digits;
}
int main()
{
int n;
cout<<"Enter the number"<<endl;
cin>>n;
print(n);
return 0;
}