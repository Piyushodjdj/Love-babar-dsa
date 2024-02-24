#include<iostream>
#include<stack>
using namespace std;


void print(stack<int> &s,int size)
{
if(s.size()==size/2+1)
{
cout<<s.top();
return;
}

int temp=s.top();
s.pop();


print(s,size);


s.push(temp);





}













int main()
{



stack<int>s;


s.push(10);
s.push(20);
s.push(30);

s.push(40);
s.push(50);
s.push(60);
s.push(70);


print(s,s.size());









    return 0;
}