#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insertathead(Node *&head,Node *&tail,int data)
{


if(head==NULL)
{
    Node *newnode=new Node(data);
    head=newnode;
    tail=newnode;
}

else
{



Node *newnode=new Node(data);

newnode->next=head;
head->prev=newnode;
head=newnode;
}
}

void print(Node *head)
{
Node *temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<endl;
    temp=temp->next;
}
}













int main()
{





Node *head=NULL;
Node *tail=NULL;

insertathead(head,tail,100);


insertathead(head,tail,100);
insertathead(head,tail,200);
insertathead(head,tail,300);
insertathead(head,tail,400);
insertathead(head,tail,500);
insertathead(head,tail,600);

print(head);













    return 0;
}