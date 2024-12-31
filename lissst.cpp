#include<iostream>
using namespace std;

struct node{
    int data;
    node * next;
};

int main(){
    node *head;
    cout<<"\nvalue of head:"<<head;
    cout<<"\nAddress of head: "<<&head;
    head = new node;
    cout<<"\nvalue of head after create node :"<<head;
    cout<<"\nAddress of head after create node: "<<&head;
    

    head->data = 20;
    head->next =NULL;
    cout<<"\nvalue of head:"<<head;
    cout<<"\nAddress of head: "<<&head;



    node * nodept;
    cout<<"\nvalue of nodept:"<<nodept;
    cout<<"\nAddress of nodept: "<<&nodept;
    nodept = new node;
    cout<<"\nvalue of nodept after create node :"<<nodept;
    cout<<"\nAddress of nodept after create node : "<<&nodept;
    nodept->data =30;
    nodept->next =head;
    cout<<"\nvalue of nodept after assign data:"<<nodept;
    cout<<"\nAddress of nodept after assign data: "<<&nodept;

    head = nodept;
    cout<<"\nvalue of head:"<<head;
    cout<<"\nAddress of head: "<<&head;

    nodept = new node;
    cout<<"\nvalue of 2nd nodept after create node :"<<nodept;
    cout<<"\nAddress of 2nd nodept after create node : "<<&nodept;
    nodept->data = 40;
    nodept->next = head;
     cout<<"\nvalue of 2nd nodept after assign data:"<<nodept;
    cout<<"\nAddress of 2nd nodept after assign data: "<<&nodept;
    head = nodept;
    cout<<"\nvalue of head:"<<head;
    cout<<"\nAddress of head: "<<&head;


    node *temp;
    temp = head;
    while(temp != NULL){
        cout<<"\nlist: "<<temp->data;
        temp = temp->next;
        
    }
}