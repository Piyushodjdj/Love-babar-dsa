#include<iostream>
using namespace std;
#include<stack>
#include<string.h>
int main()
{



string str="lovebabar";




stack<char>s;



for(int i=0;i<str.length();i++)
{
    s.push(str[i]);
}

while(!s.empty())
{
    cout<<s.top();
    s.pop();
}












    return 0;
}