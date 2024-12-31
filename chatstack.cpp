#include <iostream>
using namespace std;

class Stack {
    int top;
public:
    int* arr;
    int size;

    Stack(int s) {
        top = -1;
        size = s;
        arr = new int[size];
    }

    bool push(int value);
    int pop();
    int peek();
    bool isEmpty();
    int getSize();

    ~Stack() {
        delete[] arr;
    }
};

// Insert element into the stack
bool Stack::push(int value) {
    // Check if stack is full
    if (top == size - 1) {
        cout << "Stack overflow\n";
        return false;
    } else {
        arr[++top] = value;
        cout << value << " pushed into stack\n";
        return true;
    }
}

// Remove element from the stack
int Stack::pop() {
    // Check if stack is empty
    if (top < 0) {
        cout << "Stack underflow\n";
        return 0;
    } else {
        int x = arr[top--];
        cout << x << " popped from stack\n";
        return x;
    }
}

// Get the top element of the stack
int Stack::peek() {
    // Check if stack is empty
    if (top < 0) {
        cout << "Stack is empty\n";
        return 0;
    } else {
        return arr[top];
    }
}

// Check if the stack is empty
bool Stack::isEmpty() {
    return (top < 0);
}

// Get the current size of the stack
int Stack::getSize() {
    return top + 1;
}

int main() {
    Stack s(5);
    s.push(10);
    s.push(20);
    s.pop();
    s.peek();
    cout << "Current size of the stack: " << s.getSize() << endl;
    cout << (s.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;
    return 0;
}
