#include<iostream>
using namespace std;
class maths
{
public:
int sum(int a,int b)
{
    return a+b;
    cout<<"i am first";
}
int sum(int a,int b,int c)
{
    return a+b+c;
    cout<<"I am second";
}
int sum(float a,float b)
{
    return a+b+10;
cout<<"i am Third";
}
};
int main()
{
maths obj;
cout<<obj.sum(1,2);
cout<<obj.sum(1,2,3);
cout<<obj.sum(1.2,2.8,10);
return 0;
}