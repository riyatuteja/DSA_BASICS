// 1->2->3->4->5->NULL key=2
//2->1->4->3->5->NULL
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

node* reverse_k_nodes(node* &head,int key)
{
    int count=0;
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL&&count<key)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;

        count++;

    }
    if(nextptr!=NULL)
    {
        head->next=reverse_k_nodes(nextptr,key);
    }

    return prevptr;
}
int main()
{
    node* head=NULL;
    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
     int key; cin>>key;
     node* newhead=reverse_k_nodes(head,key);
   
    display(newhead);
       
     return 0;
}