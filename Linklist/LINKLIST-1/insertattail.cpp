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
Node *temp=new Node(data);
temp->next=head;
head=temp;
}
}
void insertattail(Node *&head,Node *&tail,int data)
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
    tail->next=newnode;
    tail=newnode;
}
}
void print(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" "<<endl;   
        temp=temp->next; 
    }
}
int main()
{
Node *head=NULL;
Node *tail=NULL;
insertathead(head,tail,10);
insertathead(head,tail,20);
insertathead(head,tail,30);
insertathead(head,tail,40);
insertathead(head,tail,50);
insertattail(head,tail,60);
insertattail(head,tail,70);
insertattail(head,tail,80);
insertattail(head,tail,90);
insertattail(head,tail,100);
insertattail(head,tail,110);


print(head);
















    return 0;
}