//doubly linked list

#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node *next;
    node *prev;
    
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void inserathead(node* &head, int val){
    node *n=new node(val);
    n->next=head;
    if(head!=NULL){
    head->prev=n;
    }
    head=n;
}

void inserattail(node* &head, int val){
    if(head==NULL){
        inserathead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void deletation(node* &head, int position){
    node* temp=head;
    int count=1;
    while(temp!=NULL && count!=position){
        
    }
    
    
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
  node* head;
  head=NULL;
  inserattail(head,1);
  inserattail(head,2);
  inserattail(head,3);
  inserattail(head,4);
  display(head);
  inserathead(head,5);
  display(head);

    return 0;
}
