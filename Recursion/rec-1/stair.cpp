#include<iostream>
using namespace std;


int climb(int n)
{
if(n==1||n==0)
{
    return 1;
}
int ans=climb(n-1)+climb(n-2);
return ans;

}
int main()
{


int n;

cout<<"Enter the no";
cin>>n;
int ans=climb(n);

cout<<"Your answer of stair is"<<ans;










    return 0;
}