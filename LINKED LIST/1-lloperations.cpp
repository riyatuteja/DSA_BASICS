//insertion deletion search display linked list
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertatHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;

}
void insertatTail(node* &head,int val)
{
    node* n= new node(val);
    if(head== NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
bool search(node* head,int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
    }
    return false;
}
void deleteatHead(node* &head)
{
    node* todelete=head;
    head=head->next;

    delete todelete;
}
void deletion(node* &head,int val)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deleteatHead(head);
    }
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;

}
int main()
{  
    node* head=NULL;
    insertatTail(head,1);
      insertatTail(head,2);
        insertatTail(head,3);
     display(head);
     insertatHead(head,4);
     display(head);  
     
     search(head,4);
     deletion(head,3);
     display(head);
     deleteatHead(head);
     display(head);
     
      return 0;
}