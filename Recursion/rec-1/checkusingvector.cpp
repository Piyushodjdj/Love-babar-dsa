#include<iostream>
#include<string>
using namespace std;
#include<vector>
bool check(string s,int size,char a,int i,vector<int>& ans)
{
    if(i>=size)
    {
        return false;
    }
if(s[i]==a)
{
    ans.push_back(i);
}
 check(s,size,a,i+1,ans);
return 1;
}
int main()
{
string s="lovebabar";
char a='b';
int size=s.length();
int i=0;
vector<int> ans;
check(s,size,a,i,ans);
for(auto i:ans)
{
    cout<<i;
}
    return 0;
}