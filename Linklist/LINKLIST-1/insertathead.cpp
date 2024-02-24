#include<iostream>
using namespace std;
class Node
{
public:
int data;
Node *ptr;
Node()
{
this->data=0;
this->ptr=NULL;
}
Node(int data)
{
this->data=data;
this->ptr=NULL;
}
};
void insertathead(Node *&head,int data)
{
if(head==NULL)
{
Node *newnode=new Node(data);
newnode->ptr=head;
head=newnode;
}
else
{
Node *temp=new Node(data);
temp->ptr=head;
head=temp;
}
}

void print(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" "<<endl;   
        temp=temp->ptr; 
    }
}
int main()
{
Node *head=NULL;
insertathead(head,10);
insertathead(head,20);
insertathead(head,30);
print(head);
    return 0;
}