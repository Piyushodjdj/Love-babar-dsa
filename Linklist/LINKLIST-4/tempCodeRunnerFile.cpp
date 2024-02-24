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

Node *reverse(Node *head)
{
    

Node *previous=NULL;
Node *current=head;
Node *forward=NULL;

while(current!=NULL)
{
    forward=current->next;
    current->next=previous;
    previous=current;
    current=forward;

}
return previous;
}

bool checkpalindrome(Node *head)
{

Node *slow=head;
Node *fast=head;

while(fast!=NULL)
{
    fast=fast->next;

if(fast!=NULL)
{



slow=slow->next;
fast=fast->next;
}

Node *reversedlink=reverse(slow->next);

slow->next=reversedlink;
Node *temp1=head;
Node *temp2=reversedlink;

while(temp2!=NULL)
{
if(temp1->data!=temp2->data)
{
    return false;
}

else
{
    temp1=temp1->next;
    temp2=temp2->next;
}
}

return true;

} 
}

int main()
{
    // Example usage
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *four = new Node(2);
    Node *five = new Node(1);

    first->next = second;
    second->next = third;
    third->next = four;
    four->next = five;

    if (checkpalindrome(first))
        cout << "The linked list is a palindrome." << endl;
    else
        cout << "The linked list is not a palindrome." << endl;

    return 0;
}
