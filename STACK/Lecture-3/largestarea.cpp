#include<iostream>
#include<vector>
#include<stack>
#include<limits>
using namespace std;
vector<int> prevsmallerelement(vector<int>&input)
{
stack<int>st;
st.push(-1);
vector<int>ans(input.size());
for(int i=0;i<=input.size()-1;i++)
{
int curr=input[i];
if(st.top()!=-1 && input[st.top()]>=curr)
{
    st.pop();
}


ans[i]=st.top();

st.push(i);

}

return ans;
}




vector<int> nextsmallerelement(vector<int>&input)
{
stack<int>st;
st.push(-1);
vector<int>ans(input.size());
for(int i=input.size()-1;i>=0;i--)
{
int curr=input[i];
if(st.top()!=-1&&input[st.top()]>=curr)
{
    st.pop();
}
ans[i]=st.top();
st.push(i);
}
return ans;
}



int getrectangularhistogram(vector<int> &height)
{
//STEP_1
vector<int> prev=prevsmallerelement(height);
//STEP_2
vector<int> next=nextsmallerelement(height);
int maxm=-10;
for(int i=0;i<height.size();i++)
{
int length=height[i];
if(next[i]==-1)
{
    next[i]=height.size();
}
int width=next[i]-prev[i]-1;
int area=length*width;
maxm=max(area,maxm);
}
return maxm;
}


int main()
{
    vector<int> histogram = {2, 1, 5,6,2,3};

    int maxArea = getrectangularhistogram(histogram);

    cout << "Maximum area of a rectangle in the histogram: " << maxArea << endl;

    return 0;
}
