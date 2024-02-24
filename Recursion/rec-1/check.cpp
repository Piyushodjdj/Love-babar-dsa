#include<iostream>
using namespace std;
bool check(string s,int i,char r)
{
if(i>=s.length())
{
    return false;
}
if(s[i]==r)
{
    cout<<"Found at"<<i;

}

return check(s,i+1,r);





}










int main()
{
string s="lovebabar";

int n=s.length();
char key='b';
int i=0;
int ans=check(s,i,key);
cout<<ans;











    return 0;
}