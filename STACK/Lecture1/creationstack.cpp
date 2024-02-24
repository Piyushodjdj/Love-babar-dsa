#include<iostream>
using namespace std;
#include<stack>

int main()
{


//creation of stack

stack<int>st;

st.push(20);
st.push(30);
st.push(40);
st.push(50);
st.push(60);


st.pop();


cout<<"Element at top"<<st.top()<<endl;


cout<<"size of stack is"<<st.size()<<endl;



if(st.empty())
{

cout<<"Stack is Empty"<<endl;

}
else
{
    cout<<"Stack is not empty"<<endl;
}


while(!st.empty())
{
    cout<<st.top()<<endl;
    st.pop();
}



    return 0;
}