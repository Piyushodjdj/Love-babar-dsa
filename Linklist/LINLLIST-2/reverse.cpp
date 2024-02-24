#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *ptr;

    Node()
    {
        this->data = 0;
        this->ptr = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->ptr = NULL;
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
        temp->ptr = head;
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
        tail->ptr = newnode;
        tail = newnode;
    }
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->ptr;
    }
    cout << endl;
}
Node* reverseloop(Node* &prev,Node* &curr )
{
while(curr!=NULL)
{

    Node *temp=curr->ptr;
    curr->ptr=prev;
    prev=curr;
    curr=temp;
}
return prev;
}
Node* reverse(Node* &prev,Node* &curr )
{
if(curr==NULL)
{
    return prev;
}
//1 hum baaki recursion
Node *forward=curr->ptr;
curr->ptr=prev;
reverse(curr,forward);
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

    head=reverseloop(prev,curr);

    print(head);

    

    return 0;
}
