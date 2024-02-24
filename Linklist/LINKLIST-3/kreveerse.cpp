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

Node* reverseknodes(Node *head,int k)
{


if(head==NULL)
{
    cout<<"ll is empty"<<endl;
    
}

int len=length(head);

if(k>len)
{
    cout<<"Enter thee valid value of k";
    return  head;
}


//IT Means no of node is greater then k
Node *previous=NULL;
Node *current=head;
Node *forward=NULL;
int count=0;
while(count<k)
{
forward=current->next;
current->next=previous;
previous=current;
current=forward;
count++;
}



if(forward!=NULL)
{
    head->next=reverseknodes(forward,k);
}


return previous;









}



























int main()
{


Node *first=new Node(10);
Node *second=new Node(20);
Node *third=new Node(30);
Node *four=new Node(40);
Node *five=new  Node(50);
Node *six=new Node(60);
first->next=second;
second->next=third;
first->next=second;
third->next=four;
four->next=five;
five->next=six;
print(first);
int k=2;
first=reverseknodes(first,k);

print(first);











    return 0;
}