#include<iostream>
using namespace std;

class stack{
    
    int top;

    public:
    int *arr;
    int size;
    stack(int s){
        size = s;
        top = -1;
        arr = new int[size];
    }

    //insertion element in stack
    bool push(int value){
        if(top == size - 1){
            cout<<"\nStack Overflow";
            return false;
        }
        else{
            top++;
            arr[top] = value;
            cout<<value<<" pushed into stack \n";
            return true;
        }
    }
    //deletion only top
    int pop(){
        //check stack is empty or not empty
        if(top < 0){
            cout<<"Stack is underflow";
            return 0;
        }
        //remove only top
        else{
            int x = arr[top --];
            return x;
        }
    }
    //only view top element in stack

    int peek(){
        if(top < 0 ){
            cout<<"stack underflow";
            return 0;
        }
        else{
            int x= arr[top];
            return x;
        }
    }
    //check stack is empty or not empty
    bool IsEmpty(){
        return (top < 0);
    }
    //size of the stack
    int IsSize(){
        return top+1;
    }
};

int main(){
    //int size;
    //cout<<"Enter the size of stack: ";
    //>>size;

    //declare of stack array size
    stack S(5);
    
    S.push(20);
    S.push(30);
    S.push(40);
    S.push(50);
    S.push(60);
    cout<<S.pop()<< " Popped from stack \n";
    cout<<"Top element is : "<<S.peek()<<endl;

    cout<<"elemnt present in stack : ";

    while(!S.IsEmpty()){
        cout<<S.peek()<<" "<<endl;
        S.pop();
    }
    
    return 0;


}