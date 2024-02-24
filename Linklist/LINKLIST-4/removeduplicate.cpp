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


Node *removeduplicate(Node *&head)
{


if(head==NULL)
{
    cout<<"LL is not pssible";
    return  NULL;
}
if(head->next==NULL)
{
    return head;
}

Node *current=head;

while(current!=NULL)
{


if((current->next!=NULL)&&(current->data==current->next->data))


{
Node *temp=current->next;
current->next=current->next->next;
delete temp;

}

else
{
    current=current->next;
}

}
return head;
}











    



int main()
{
    // Example usage
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(2);
    Node *four = new Node(3);
    Node *five = new Node(4);
    Node *six=new Node(4);

    first->next = second;
    second->next = third;
    third->next = four;
    four->next = five;
    five->next=six;

print(first);
  
first=removeduplicate(first);
cout<<endl;
print(first);
    return 0;
}
