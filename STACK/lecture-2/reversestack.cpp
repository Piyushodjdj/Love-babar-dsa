#include<stack>
#include<iostream>
using namespace std;
void solve(stack<int> &s,int target)
{


if(s.empty())
{
    s.push(target);
    return;
}

int top=s.top();
s.pop();
solve(s,target);

s.push(top);





}

void reverse(stack<int> &s)
{




//base case 

if(s.empty())
{
    return;
}







//nahi pataaa

int target=s.top();

s.pop();

//reverse
reverse(s);

//insert at bottom

solve(s,target);
















}




















int main()

{
stack<int> s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);
s.push(70);
s.push(80);

reverse(s);



cout<<"Printing ";
while(!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}


cout<<endl;







return 0;
}