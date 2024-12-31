#include<iostream>
using namespace std;

class Stack{
    int top;
    public:
    int * arr;
    int size;

    Stack(s){
        top = -1;
        size = s;
        arr = new int[size];    
    }
    bool push(int value);
    int pop();
    int peek();
    bool isEmpty();
    bool issize();

    ~stack(){
        delete[] arr;
    }
};

//insertion element in Stack
bool Stack::push(int value){
    //check conditon
    if(top == size-1){
        cout<<"Stack is overflow \n";
        return false;
    }//added element in Stack
    else{
        
        arr[++top] = x;
        cout<<x<<" pushed in Stack\n";
        return true;
    }
}
//deletion element in Stack at only top remove
int Stack::pop(){
    //check Stack is empty or not
    if(top < 0){
        cout<<"Stack is underflow\n ";
        return 0;
    }//remove top element in Stack
    else{
        
        int x = arr[top--];
        cout<<x<<" popped element \n";
        return x;
    }

}
//view only top element
int Stack::peek(){
    //check Stack is empty or not
    if (top <0){
        cout<<"Stack is empty\n";
        return 0;
    }
    else{
        return arr[top];
    }
}
//Stack is empty or not
bool Stack:: isEmpty(){
    return (top<0);
}

int Stack::issize(){
    return top +1;
}

int main() {
    //int size;
    //cout<<"Enter the size of Stack ";
    //cin>>size;

    class Stack s(5);
    s.push(10);
    s.pop();
}
