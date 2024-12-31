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

   //Head create/
   /*
   head indicate only first node address*/
    nodeptr head;
    cout<<"\nHead store random address : "<<head<<endl;
    cout<<"\n&Head: "<<&head<<endl;
    head = NULL;
    cout<<head<<endl;
    /*
    create first node
    */
    cout<<"Create First node : ";

    head =  new node;
    cout<<"\nHead store the data of first node address: "<<head<<endl;
    cout<<"\n1&Head: "<<&head<<endl;
    head->data = 20;
    head->link = NULL;

    cout<<head->data<<endl;
    cout<<head->link;
    cout<<"\naddress of head variable: "<<&head;
    cout<<"\ntempt store after create node store address of new node: "<<head;

    /*
    create second node of list
    */
    cout<<"\nCreate second node : ";
    nodeptr tempt;
    cout<<"\naddress of temp variable: "<<&tempt;
    cout<<"\ntempt store before not create 'new node' random address another by default: "<<tempt<<endl;
    tempt = new node;
     cout<<"\naddress of temp variable: "<<&tempt;
    cout<<"\ntempt store after create node store address of new node: "<<tempt<<endl;
    
    tempt->data = 40;
    tempt->link = NULL;
    cout<<tempt->data<<endl;
    cout<<tempt->link<<endl;
    cout<<"\naddress of temp variable: "<<&tempt;
    cout<<"\ntempt store after create node store address of new node: "<<tempt;


   
}