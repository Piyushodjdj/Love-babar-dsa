#include<iostream>
using namespace std;
#include<vector>
#include<stack>
vector<int> prevsmallerelement(vector<int>&input)
{

stack<int>st;
st.push(-1);
vector<int>ans(input.size());


for(int i=0;i<=input.size()-1;i++)
{

int curr=input[i];
if(st.top()>=curr)
{
    st.pop();
}

ans[i]=st.top();
st.push(curr);
}







return ans;
}

int main()
{





vector<int> v;
v.push_back(2);
v.push_back(1);
v.push_back(3);
v.push_back(4);
v.push_back(8);


vector<int>ans=prevsmallerelement(v);







for(int i = 0; i < ans.size() - 1; i++)
{
    cout << ans[i] << " ";
}

// Adding a newline after the last element
cout << ans.back() << endl;




















    return 0;
}