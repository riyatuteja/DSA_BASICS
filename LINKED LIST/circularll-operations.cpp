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
    node* temp=head;
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }


    while(temp->next!=head)
    {
        temp=temp->next;
    }

     temp->next=n;
    n->next=head;
    head=n;

    

}
void insertaatTail(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        insertatHead(head,val);
        return;
    }
    node* temp=head;

    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;

}
void deleteathead(node* &head)
{
    node* temp= head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    node* todelete=head;
    temp->next=head->next;
    head=head->next;

    delete todelete;
}
void deletion(node* &head,int pos)
{
    if(pos==1)
    {
        deleteathead(head);
        return;
    }
    node* temp=head;int count=1;
    
    while(count!=pos-1)
    {

        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
}
void display(node* &head)
{
    node* temp=head;
    
    do
    {
        /* code */
        
        cout<<temp->data<<" ";
        temp=temp->next;
    }while (temp!=head);

    cout<<endl;

    
}
void search(node* &head,int key)
{
    node* temp=head;
    
    do
    {
        if(temp->data==key)
        {cout<<"found the key="<<temp->data<<" ";
        break;}
        temp=temp->next;
    } while (temp!=head);

    cout<<endl;

    
}
int main()
{
    node* head=NULL;
    int arr[]={1,2,3,4,5};
    for( int i=0;i<5;i++)
    {
        insertaatTail(head,arr[i]);
    }
    display(head);
    insertatHead(head,6);
    deletion(head,5);
    display(head);
    search(head,1);
    return 0;
}