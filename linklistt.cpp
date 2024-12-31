#include<iostream>
using namespace std;

struct node
{
    int data;
    node * link;
};
typedef node * nodeptr;

void insert(node &head, int data){
    nodeptr newnode;
    newnode = new node;
    newnode->data = data;
    newnode ->link = head;
    head = newnode;
}

int main(){
    nodeptr head = NULL;
    head = new node;
    head ->data = 20;
    head->link = NULL;

    cout<<"list: "<<head->data;

    insert(head,40);
    insert(head,20);
    insert(head,50);
    insert(head,70);
    insert(head,30);

    nodeptr temp;
    temp = head;

    while(temp != NULL){
        cout<<"List : "<<temp->data;
        temp = temp->link;
        
    }
}
