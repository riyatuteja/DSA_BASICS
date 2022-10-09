
#include<iostream>
using namespace std;

class node{
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
void insertatTail(node* &head ,int val)
{
node* n =new node(val);
if(head==NULL)
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
void display(node* & head)
{
    node* temp= head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;

    }
    cout<<"NULL"<<endl;
}
node* iterative_reverse(node* &head)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;

    }

    return prevptr;
}
node* recursive_reverse(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    } 
    node* newhead=recursive_reverse(head->next);
   
    head->next->next=head;
    head->next=NULL;

    return newhead;
}
int main()
{
    node* head=NULL;
    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
     
   
    display(head);
    //recursive reverse
    node* Newhead= recursive_reverse(head);
    display(Newhead);
     //iterative reverse
    node* newhead= iterative_reverse(head);
    display(newhead);
    
       
     return 0;
}