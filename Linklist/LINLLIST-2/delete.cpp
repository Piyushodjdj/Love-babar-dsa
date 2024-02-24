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

void insertathead(Node *&head, Node *&tail, int data)
{
    Node *newnode = new Node(data);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}

void insertattail(Node *&head,Node *&tail,int data)
{
    if(head==nullptr)
    {
 Node *newnode=new Node(data);
 head=newnode;
 tail=newnode;
    }

else
{

Node *newnode=new Node(data);
tail->next=newnode;
newnode->prev=tail;
tail=newnode;
}

}
int findlength(Node *head)
{
    Node *temp=head;
    int len=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
return len;
}
void insertatposition(Node *&head,Node *&tail,int position,int data)
{

if(head==NULL)
{
    Node *newnode=new Node(data);
    head=newnode;
    tail=newnode;
}
else
{
if(position==1)
{
    insertathead(head,tail,data);
}
int len=findlength(head);
if(position==len)
{
insertattail(head,tail,data);
return;
}
//link at middle 
int i=1;
Node *prev=head;
while(i<position-1)
{
    prev=prev->next;
    i++;
}
Node *current=prev->next;
//create a newnode
Node *newnode=new Node(data);
prev->next=newnode;
newnode->prev=prev;
newnode->next=current;
current->prev=newnode;
}
}
void deleteNode(Node *&head,Node *&tail,int position)
{

if(head==NULL)
{
    cout<<"Link-list can't be deleted";
    return;
}


if(head->next==NULL)
{
Node *temp=head;
head=NULL;
tail=NULL;
delete  temp;
return;
}
if (position == 1)
{
    Node *temp = head;
    head = head->next;
    if (head != NULL)
    {
        head->prev = NULL;
    }
    temp->next = NULL;
    temp->prev = NULL;
    delete temp;
    return;
}

int len=findlength(head);

if(position>len)
{
    
    cout<<"Deleteion starts from here";
    return;
}
if(position==len)
{
    Node *temp=tail;
    tail=tail->prev;
    temp->prev=NULL;
    temp->next=NULL;
    tail->next=NULL;

delete temp;
return;
}


int i=1;
Node *temp=head;
while(i<position-1)
{
temp=temp->next;
i++;
}

Node *current=temp->next;

Node *right=current->next;

temp->next=right;



right->prev=temp;
current->next=NULL;
current->prev=NULL;

delete current;






}
void print(Node *&head)
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
insertattail(head,tail,700);
insertatposition(head,tail,1,450);
print(head);
cout<<"Delete started from here";
deleteNode(head,tail,1);

print(head);
return 0;
}