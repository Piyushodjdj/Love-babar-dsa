#include<iostream>
#include<vector>
#include<stack>
using namespace std;
// SAME WINDOW MIEN HUM DEKH RHE HAI HUM
int main()
{

vector<int> v;
v.push_back(2);
v.push_back(1);
v.push_back(4);
v.push_back(3);

vector<int>ans(v.size());

stack<int>st;

st.push(-1);


for(int i=v.size()-1;i>=0;i--)
{
int curr=v[i];


while(st.top()>curr)
{
    st.pop();
}


ans[i]=st.top();
st.push(curr);
}





for(int i=0; i<ans.size()-1; i++)
{
    cout << ans[i] << " ";
}

// Adding a newline after the last element
cout << ans.back() << endl;





















    return 0;
}