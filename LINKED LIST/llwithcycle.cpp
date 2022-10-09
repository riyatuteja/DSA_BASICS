/* 1->2->3->4->5
         ^     |
         |     v
         8<-7<-6 */

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
    node* n=new node(val);
    if(head==NULL)
    {
        head = n;
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
void makecycle(node* &head,int pos)
{
    node* temp=head;
    node* startnode=NULL;
    int count=1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
}
bool check_cycle(node* &head)
{
    node* fast=head;
    node* slow=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
        {
            return true;
        }
    }
    return false;

}
void remove_cycle(node* &head)
{
    node* fast=head;
    node* slow=head;

    do
    {
        fast=fast->next->next;
        slow=slow->next;
    }while(fast!=slow);

    fast=head;

    while(fast->next!=slow->next)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
}
int main()
{
    node* head=NULL;
    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
    insertatTail(head,5);
    insertatTail(head,6);
    insertatTail(head,7);
    insertatTail(head,8);
    insertatTail(head,9);
    insertatTail(head,10);
     int key; cin>>key;
     makecycle(head,key);
    cout<<check_cycle(head)<<endl;
   remove_cycle(head);
   cout<<check_cycle(head)<<endl;
    display(head);
       
     return 0;
}

         