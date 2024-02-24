#include<iostream>
using namespace std;
//ADDING TWO LINK-LIST
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


Node *reverse(Node *head)
{
Node *prev=NULL;
Node *current=head;
Node *forward=NULL;
while(current!=NULL)
{
forward=current->ptr;
current->ptr=prev;
prev=current;
current=forward;
}
return prev;
}

Node *solve(Node *&head1,Node *&head2)
{
head1=reverse(head1);
head2=reverse(head2);
Node *anshead=NULL;
Node *anstail=NULL;
int carry=0;
while(head1!=NULL&&head2!=NULL)
{
int  sum=head1->data+head2->data+carry;
int digit=sum%10;
carry=sum/10;
//carry a newnode for the digit
Node *newnode=new Node(digit);
// attach the newnode for the answer wali link-list
if(anshead==NULL)
{
    anshead=newnode;
    anstail=newnode;
}
else
{
    anstail->ptr=newnode;
    anstail=newnode;
}
head1=head1->ptr;
head2=head2->ptr;
}





while(head1!=NULL)
{

int sum=carry+head1->data;

int digits=sum%10;
carry=sum/10;
Node *newnode=new Node(digits);
anstail->ptr=newnode;
anstail=newnode;
head1->ptr=head1;
}



while(head2!=NULL)
{

int sum=carry+head2->data;

int digits=sum%10;
carry=sum/10;
Node *newnode=new Node(digits);
anstail->ptr=newnode;
anstail=newnode;
head1->ptr=head2;
}

while(carry!=0)
{
    int sum=carry;
    int digit=sum%110;
    sum=sum/10;
Node *newnode=new Node(digit);

anstail->ptr=newnode;
anstail=newnode;
}

anshead=reverse(anshead);
return anshead;


}

// reverse both limnk lists
//add two link lists
//ans wali link list ko reverse kr do





















int main()
{

Node *head=new Node(2);
Node *second=new Node(4);
head->ptr=second;
Node *head2=new Node(2);
Node *second2=new Node(3);
Node *second3=new Node(5);
head2->ptr=second2;
second2->ptr=second3;




Node *ans=solve(head,head2);




    return 0;
}