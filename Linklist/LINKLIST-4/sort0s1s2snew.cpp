#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *head)
{
Node *temp1=head;
while(temp1!=NULL)
{
    cout<<temp1->data<<" ";
    temp1=temp1->next;
}
}

Node *sort2(Node *&head)
{

Node *zerohead=new Node(-1);
Node *zerotail=zerohead;


Node *onehead=new Node(-1);
Node *onetail=onehead;

Node *twohead=new Node(-1);
Node *twotail=twohead;


Node *temp=head;
while(temp!=NULL)
{




if(temp->data==0)
{
Node *hii=temp;
temp=temp->next;
hii->next=NULL;
zerotail->next=hii;
zerotail=hii;
}

else
{

if(temp->data==1)
{
Node *hii=temp;
temp=temp->next;
hii->next=NULL;



onetail->next=hii;
onetail=hii;



}

else
{
if(temp->data==2)
{

Node *hii=temp;
temp=temp->next;
hii->next=NULL;



twotail->next=hii;
twotail=hii;

}
}
}
}





Node *remove=onehead;
onehead=onehead->next;
remove->next=NULL;
delete remove;




remove=twohead;
twohead=twohead->next;
remove->next=NULL;
delete remove;



if(onehead!=NULL)
{

zerotail->next=onehead;

if(twohead!=NULL)
{
onetail->next=twohead;
}  

}
else
{

if(twohead!=NULL)
{
zerohead=twohead;
}
}


remove=zerohead;
zerohead=zerohead->next;
remove->next=NULL;
delete remove;





return zerohead;
}


int main()
{
    // Example usage
    Node *first = new Node(2);
    Node *second = new Node(1);
    Node *third = new Node(1);
    Node *four = new Node(0);
    Node *five = new Node(0);
    Node *six=new Node(2);
    Node *seven=new Node(1);

first->next = second;
second->next = third;
third->next = four;
four->next = five;
five->next=six;
six->next=seven;
print(first);
cout<<endl;
first=sort2(first);
print(first);
cout<<endl;

    return 0;
}
