//linklist is a concept of address
//linklist is based on non-continuos memory allocation
//linklist is a linear datastructure
//linklist is a collection of nodes
//node mien hoga data address
//address kiska hoga??
//ans-> next node k address hogaaa node mien

//address kaun store kregaa pointer pr kis type k hogaa??
//address pointer node ko point kregaaa toh node* ptr hogaaa

//LINK LIST IS HINDI

#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node()
    {
        this->data=0;
        this->next=NULL;
    }
    Node(int data)
    {
        this->data=data;
        this->next=NULL;

    }
};


void insertathead(Node *&head)
{
Node *temp=head;
temp=temp->next;
}








void print(Node *head)
{
    Node *temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}



int main()
{
Node *first=new Node(10);
Node *second=new Node(20);
Node *third=new Node(30);
first->next=second;
second->next=third;
print(first);
    return 0;
}