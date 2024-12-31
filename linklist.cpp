#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;

};
typedef node* nodeptr;
void insert(nodeptr &head,int data){
    nodeptr temptr;
    temptr = new node;
    temptr->data = data;
    temptr->next = head;
    head = temptr;
}
void delette(nodeptr &head,int item){
    nodeptr ptr,preloc,loc;
    if(head== NULL){
        cout<<"UnderFlow: ";
        return;
    }
    ptr = heaad;
    preloc = NULL;
    while(ptr!=NULL && item != ptr->data){
        preloc = ptr;
        ptr = ptr->next
    }
    if(item == ptr->data){
        loc=ptr;
    }else{
        cout<<"Not Found: ";
    }if(preloc == NULL){
        head = head->next;
    }else{
        preloc->link = loc->link;
    }
    delete loc;
}
int main(){

    nodeptr head;
    head = new node;

    head->data=10;
    head->next = NULL;

    cout<<head->data<<endl;
    insert(head,30);
    insert(head,80);
    delette(head,10)
    nodeptr temp;

    temp = head;

    while(temp != NULL){
        cout<<"List"<<temp->data<<endl;
        temp = temp->next;
    }
    //cout<<"How Many node in list: "<<cout;


}