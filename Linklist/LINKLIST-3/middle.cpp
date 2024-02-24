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
void insertathead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
}

void insertattail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    else
    {
        Node *newnode = new Node(data);
        tail->next = newnode;
        tail = newnode;
    }
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
} 
Node *middle(Node *head)
{

Node *slow=head;
Node *fast=head;

while(fast!=NULL)
{
    fast=fast->next;
    if(fast!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
}
return slow;
}
int main()
{


   Node *head = NULL;
    Node *tail = NULL;

    insertathead(head, tail, 10);
    insertathead(head, tail, 20);
    insertathead(head, tail, 30);
    insertattail(head, tail, 40);
    insertattail(head, tail, 50);
    Node *prev=NULL;
    Node *curr=head;

  Node *mid=middle(head);

    cout<<mid->data;















    return 0;
}