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
Node *temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}

}

void sortzeroonetwo(Node *&head)
{



int  zero=0;
int one=0;
int two=0;




Node *temp=head;

while(temp!=NULL)
{
    if(temp->data==0)
    {
        zero++;
    }
    if(temp->data==1)
    {
        one++;
    }
    if(temp->data==2)
    {
        two++;
    }
    temp=temp->next;
}




temp=head;

while(zero--)
{
temp->data=0;
temp=temp->next;
}
while(one--)
{
temp->data=1;
temp=temp->next;
}
while(two--)
{
temp->data=2;
temp=temp->next;
}
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
sortzeroonetwo(first);
print(first);
  
cout<<endl;

    return 0;
}
