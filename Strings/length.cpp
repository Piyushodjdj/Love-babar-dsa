#include<iostream>
using namespace std;
int getlength(char name[])
{
    int length=0;
    int i=0;
while(name[i]!='\0')
{
i++;
length++;
}
return length;
}
int main()
{
char name[50];
cin>>name;
cout<<"Length is"<<getlength(name);
    return 0;
}