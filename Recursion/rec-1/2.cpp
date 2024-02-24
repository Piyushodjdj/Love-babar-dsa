#include<iostream>
using namespace std;
void printing(int n)
{

if(n==0)
{
    return ;
}
cout<<n<<endl;//processing
printing(n-1);//recuursive relation
}
int main()
{
cout<<"Enter the number";
int n;
cin>>n;
printing(n);
return 0;
}