//QUEUE DATA STRUCTURE
#include<iostream>
#include<queue>
using namespace std;
int main()
{

//push rear se hota hai
//pop bhi front se hota h

queue<int> q; //creation of queue


q.push(10);
q.push(20);
q.push(30);
q.push(40);

q.push(50);
q.push(60);

q.push(70);
q.push(80);

q.push(90);
q.push(100);



cout<<"Size of queue is"<<q.size()<<endl;
cout<<q.front()<<endl;
//removal


q.pop();
cout<<q.front()<<endl;


cout<<q.size()<<endl;





























    return 0;
}