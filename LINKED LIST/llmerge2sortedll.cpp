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
//recursive approach
node* merge_recursively(node* &head1,node* &head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    node* result;
    if(head1->next<head2->next)
    {
        result=head1;
        result->next=merge_recursively(head1->next,head2);
    }
    else{
        result=head2;
        result->next=merge_recursively(head1,head2->next);

    }
    return result;
}
//iterative approach
node* merge_ll(node* &head1,node* &head2)
{
    int val=0;
    node* ptr1;
    node* ptr2;
    if(head1>head2){
        val=head2->data;
     ptr2=head2->next; 
    ptr1=head1;
    }
    else
    {
        val=head1->data;
    ptr1=head1->next; 
    ptr2=head2;

    }
   
    node* dummy=new node(val);
    node* ptr3=dummy;

    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->data<ptr2->data)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    while(ptr1!=NULL)
    { ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }
    while(ptr2!=NULL)
    {
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    return dummy;
}
int main()
{
    node* head1=NULL;
    node* head2=NULL;
    insertatTail(head1,1);
    insertatTail(head2,2);
    insertatTail(head1,3);
    insertatTail(head2,4);
    insertatTail(head1,5);
    insertatTail(head2,6);
    insertatTail(head1,7);
    insertatTail(head1,8);
    insertatTail(head2,9);
    insertatTail(head1,10);
    display(head1);
    display(head2);
     
    node* newhead=merge_ll(head1,head2);

    display(newhead);
       
     return 0;
}

         