#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *ptr;
    Node *next;

    Node()
    {

        this->data=0;
        this->ptr=NULL;
        this->next=NULL;
    }
    Node(int data)
    {
        this->data=data;
        this->ptr=NULL;
        this->next=NULL;
    }

};


void print(Node *head)
{
Node *temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<endl;
    temp=temp->next;
}
}

int getlength(Node *head)
{
    Node *temp=head;
    int len=0;
    while(temp!=NULL)
    {

   
len++;
temp=temp->next;

    }
    return len;
}

int main()
{


Node *first=new Node(10);
Node *second=new Node(20);
Node *third=new Node(30);

first->next=second;
second->ptr=first;
second->next=third;
third->ptr=second;

cout<<getlength(first)<<"Length of ll is"<<endl;

print(first);





    return 0;
}
