#include<iostream>
#include<cstring>
using namespace std;


void convert(char a[])
{
      

     // Use the standard strlen function
int n=strlen(a);

for(int i=0;i<n;i++)
{
    a[i]=a[i]-32;
}
}
int main()
{
char a[100]="babar";
convert(a);
cout<<a;
return 0;
}