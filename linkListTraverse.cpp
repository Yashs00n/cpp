#include<iostream>
using namespace std;

struct  node{
    int data;
    node *next;

};
typedef node* nodeptr;
nodeptr search(nodeptr head,int item){
    nodeptr loc,temp;
      while(temp!=NULL){
        temp=temp->next;        
        if(item == temp->data){
            loc=temp;
            
        }
        return (loc);
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

    nodeptr temp,loc;
    temp = head;
    int item = 10;
    loc = search(head,item);
    cout<<"cout loc :"<<loc;
    while(temp != NULL) {
        cout<<"list:"<<temp->data<<endl;
        temp = temp->next;
    }
  
    

}

