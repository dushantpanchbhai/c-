#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next = NULL;
    }
};

void insertAtTail(node* &head,int val)
{
    node* n = new node(val);
    if (head == NULL)
    {
        head =n;
        return;
    }

    node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp -> next=n;
}

void display(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}
void insertAtHead(node* &head,int val)
{
    node* n = new node(val);
    n->next = head;
    head = n;
}

bool search(node* head,int key)
{
    node* temp = head;
    while(temp != NULL)
    {
        if(temp->data = key)
        {
            return true;
        }
        temp = temp->next;
    }

    return false;
}

void deleteAtHead(node* &head)
{
    node* todelete = head;
    head = head->next;

    delete todelete;
}

void deletion(node* &head,int val)
{
    if(head==NULL)
    {
        return;
    }

    node* temp = head;
    if(head->data == val)
    {
        deleteAtHead(head);
        return;
    }
    
    while(temp->next->data != val)
    {
        temp = temp->next;
    }

    //we have to delete the temp->next node;

    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

int main()
{
    node* head=NULL;
    
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,5);

    insertAtHead(head,34);
    
    display(head);
    
    deletion(head,34);
    display(head);
    
    return 0;
}