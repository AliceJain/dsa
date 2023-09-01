#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtTail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

node* reverse(node *&head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
node* reverseRecursive(node* &head){
    if(head==NULL || head->next==NULL)
       return head;

    node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

}

node* kreverse(node *&head, int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=kreverse(nextptr,k);
    }
    return prevptr;
}

node* reverseBetween(node* head, int left, int right) {
    if(head==NULL || head->next==NULL)
        return head;
    int count=0;
    node* temp=head;
    while(temp!=NULL && count<left-1){
        count++;
    }
    node* prevptr=temp;
    node* currptr=temp->next;
    node* nextptr;
    while(currptr!=NULL && count!=right){
       nextptr=currptr->next;
       currptr->next=prevptr;
       prevptr=currptr;
       currptr=nextptr;
       count++;
    }
    return head;
    }

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    node* newhead = reverseBetween(head,2,4);
    display(newhead);

    return 0;
}
