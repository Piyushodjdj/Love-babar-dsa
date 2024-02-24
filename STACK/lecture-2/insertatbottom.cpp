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







void pushbottom(stack<int> &s)
{
if(s.empty())
{
    cout<<"Can't feel";
    return ;
}
int target=s.top();
s.pop();
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
pushbottom(s);



cout<<"Printing";
while(!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}


cout<<endl;







return 0;
}