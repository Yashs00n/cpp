#include<iostream>
using namespace std;

struct  node
{
    int data;
    struct node *link;    /* data */
};
typedef node* nodeptr;

int main()
{
    /*
    single list 
    only vale override
    not link node
    */
    nodeptr head;
    cout<<"\nHead: "<<head<<endl;
    cout<<"\n&Head: "<<&head<<endl;
    head = NULL;
    cout<<head<<endl;

    head =  new node;
    cout<<"\n1Head: "<<head<<endl;
    cout<<"\n1&Head: "<<&head<<endl;
    head->data = 20;
    head->link = NULL;

    cout<<head->data<<endl;
    cout<<head->link;
    head->data = 30;
    head->link = NULL;
    cout<<head->data<<endl;
    cout<<head->link;
    cout<<"\n2Head: "<<head<<endl;
    cout<<"\n2&Head: "<<&head<<endl;
}