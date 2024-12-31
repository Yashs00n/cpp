#include<iostream>
using namespace std;

class Node{
    public:
    int data; 
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

class stack{
    Node *top;
    int size;
    public:
    stack(){
        top = NULL;
        size = 0;
    }
    bool push(int value);
    int pop();
    int peek();
    bool isEmpty();
    int IsSize();
};
//insertion element
bool stack::push(int value){
    Node * temp =new Node(value);
    if(temp == NULL){
        cout<<"Overflow";
        return false;
    }
    temp->next = top;
    top = temp;
    cout<<top->data<<" :pushed element in stack\n";
    size++;
    return true;
}

//deletion element 
int stack::pop(){
    if(top == NULL){
        cout<<"stack underflow\n";
        return 0;
    }else{
        Node * temp =top;
        top = top->next;
        size--;
        return  temp->data;
        delete temp;
    }
}
//view top element
int stack::peek(){
    if(top == NULL){
        cout<<"stack underflow\n";
        return -1;
    }
    else{
        return top ->data;
    }
}

bool stack::isEmpty(){
    return top == NULL;
}
int stack::IsSize(){
    return size;
}

int main(){
    stack s;
    s.peek();
    s.push(6);
    s.push(5);
    s.push(8);
    s.push(9);
    cout<<s.IsSize()<<":size of stack\n";
    cout<<"Top element is : "<<s.peek()<<endl;
    cout<<s.pop()<<" :popped element in stack\n";
    
    cout<<"Top element is : "<<s.peek()<<endl;

    cout<<"elemnt present in stack : ";

    while(!s.isEmpty()){
        cout<<s.peek()<<" "<<endl;
        s.pop();
    }
    cout<<s.IsSize()<<":of stack";
}