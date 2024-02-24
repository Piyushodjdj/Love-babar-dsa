#include<iostream>
#include<string>
using namespace std;

bool check(string s,int i,int r,char c)
{
if(i>r)
{
    return false;
}

if(s[i]==c)
{
    
    return 1;
}
int ans=check(s,i+1,r,c);
return ans;
}
int main()
{
string s="Lovebabar";
int n=s.length()-1;
char c='r';
int result=check(s,0,n,c);
cout<<result;
return 0;
}