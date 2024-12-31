#include<iostream>
using namespace std;

struct  node{
    int data;
    node *next;

};
typedef node* nodeptr;
void deleteitem(node** head,int item){
    node *ptr,*preloc,*loc;
    if(head == NULL){
        cout<<"underflow: ";
        return;
    }
    ptr = *head;
    preloc=NULL;
    while (ptr != NULL){
        preloc = ptr;
        ptr = ptr->next;
    }
    if(item == ptr->data){
        loc = ptr;
    }
    else{
        cout<<"Item not found,exit without deletion";
        return;
    }
    if(preloc == NULL){
        *head = (*head)->next;
    }else{
        preloc->next=loc->next;
    }
    delete loc;
    {
        /* code */
    }
    
}

int main(){
    nodeptr head;
    head = NULL;
    head = new node;
    head->data = 20;
    head->next = NULL;

    nodeptr linknode;
    linknode = new node;
    linknode->data=30;
    linknode->next = head;
    head = linknode;

    linknode = new node;
    linknode->data = 40;
    linknode->next = head;
    head = linknode;
    int item;
    cout<<"Enter information part of node to be delete: ";
    cin>>item;
    deleteitem(&head,item);

    nodeptr temp;
    temp = head;

    while(temp != NULL) {
        cout<<"list:"<<temp->data<<endl;
        temp = temp->next;
    }

}

