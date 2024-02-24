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


void insertathead(Node *&head,Node *&tail,int data)
{
if(head==NULL)
{
Node *newnode=new Node(data);
tail=newnode;
head=newnode;
}
else
{
Node *temp=new Node(data);
temp->ptr=head;
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
    tail->ptr=newnode;
    tail=newnode;
}
}


int findlength(Node *&head)
{
    Node *temp=head;
    int len=0;
    while(temp!=NULL)
    {
        temp=temp->ptr;
        len++;
    }
    return len;
}
void insertatposition(int data,Node *&head,Node *&tail,int position)

{

if(head==NULL)
{
    Node *newnode=new Node(data);
    head=newnode;
    tail=newnode;
}

int len=findlength(head);
cout<<"length of linklist is "<<len<<endl;
if(position==len)
{
    insertattail(head,tail,data);
    return;
}

else
{

if(position==0)
{
    insertathead(head,tail,data);
    return;
}
int i=1;
Node *temp=head;
while(i<position)
{
    temp=temp->ptr;
    i++;
}

Node *cuur=temp->ptr;

Node *newnode1=new Node(data);

newnode1->ptr=cuur;
temp->ptr=newnode1;
}
}

void deleteNode(int position, Node *&head, Node *&tail) 
{


if(head==NULL)
{
    cout<<"Link list cannot be deleted";
}

if(position==1)
{
Node *temp=head;
head=head->ptr;

temp->ptr=NULL;
delete temp;
return ;
}





int len=findlength(head);

if(position==len)
{
//
int i=1;
Node *prev=head;
while(i<position-1)
{
    
    prev=prev->ptr;
    i++;
}
Node *temp=tail;
tail=prev;

prev->ptr=NULL;
delete temp;
return;
}

//AT ANY POSITION

int i=1;
Node *prev=head;
while(i<position-1)

{
prev->ptr=prev;
i++;
}

Node *current=prev->ptr;

prev->ptr=current->ptr;

current->ptr=NULL;
delete current;














    
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
insertatposition(1100,head,tail,11);
print(head);

deleteNode(1,head,tail);

print(head);










    return 0;
}