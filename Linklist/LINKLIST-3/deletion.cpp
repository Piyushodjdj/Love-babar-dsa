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

void print(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int length(Node *head)
{
    int len=0;

    Node *temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
}



Node *remove(Node *head)
{
if(head==NULL)
{
    cout<<"LL is empty";
    return NULL;
    
}
Node *slow=head;
Node *fast=head;
while(fast!=NULL)
{
fast=fast->next;
if(fast!=NULL)
{
    slow=slow->next;
    fast=fast->next;

if(slow==fast)
{
    slow=head;
    break;

}
}
}


Node *prev=fast;
while(slow!=fast)
{
prev=fast;
fast=fast->next;
slow=slow->next;
}

prev->next=NULL;
return slow;









}







int main()
{
Node *first=new Node(10);
Node *second=new Node(20);
Node *third=new Node(30);
Node *four=new Node(40);
Node *five=new  Node(50);
Node *six=new Node(60);
Node *seventh=new Node(60);
Node *eight=new Node(60);
Node *nine=new Node(60);

first->next=second;
second->next=third;
third->next=four;
four->next=five;
five->next=six;
six->next=seventh;
seventh->next=eight;
eight->next=nine;
nine->next=five;

cout<<"looops is present "<<remove(first)->data;
print(first);
    return 0;
}