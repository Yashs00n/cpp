#include<iostream>
using namespace std;

struct  node
{
    int data;
    node * next;
};
typedef node* nod;
int main(){
    nod create();
    /*void traverse(nod);
    nod search(nod,int);
    void instloc(nod*,int,nod);*/
    nod head = creat();
    /*int item;
    cout<<"\nEnter Item to search from linked list: ";
    cin>>item;
    nod loc = search(head,item);
    cout<<"linked list before insertion\n";
    traverse(head);
    int data;
    cout<<"\nenter info to be inserted into new node =";
    cin>>data;
    instloc(&head.data,loc);
    cout<<"linklist after insertion\n";
    traverse(head);
    cout<<"\nEnd of list...............\n";
    nod ptr=head;
    while(ptr!=NULL){
        ptr=ptr->next;
        delete head;
        head = ptr;
    }
    */

}

nod create(){
    no ptr,head=NULL;
    char ch ="y";
    while(ch=='y'!! ch=="Y"){
        if(head==NULL){
            head= new node;
            ptr=head;
        }else{
            ptr->next=new node;
            ptr=ptr->link;
        }
        int data;
        cout<<"enter info of new node\t=";
        cin>>data;
        ptr->next=data;
        cout.flush();
        cout<<"want to continue:(x or y)=\n";
        cin>>ch;
    }
    ptr->next=NULL;
    return (head);
}