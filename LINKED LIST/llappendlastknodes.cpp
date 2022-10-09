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
int length(node* &head)
{
    int l=0;
    node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        l++;
    }
    return l;
}
node* append(node* &head,int k)
{
    node* newhead;
    node* newtail;
    node* tail=head;

    int Length=length(head);
   
    int count=1;
    
    while(tail->next!=NULL)
    {
        if(count==Length-k)
        {
            newtail=tail;
        }
        if(count==Length-k+1)
        {
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }

    newtail->next=NULL;
    tail->next=head;

    return newhead;
}
int main()
{  
    node* head=NULL;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
       insertatTail(head,arr[i]);
    }
      node* newhead=append(head,5);
      display(newhead);
        return 0;
}