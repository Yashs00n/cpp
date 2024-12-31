#include <iostream>
#include <stack>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void reverseLinkedList(Node*& head) {
    if (head == nullptr || head->next == nullptr) {
        return; // Empty list or single node, no need to reverse
    }

    stack<Node*> s;
    Node* current = head;

    // Push all nodes onto the stack
    while (current != nullptr) {
        s.push(current);
        current = current->next;
    }

    // Pop nodes from the stack and update the linked list
    head = s.top();
    s.pop();
    current = head;
    while (!s.empty()) {
        current->next = s.top();
        s.pop();
        current = current->next;
    }
    current->next = nullptr; // Set the last node's next pointer to null
}

void displayLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Create the linked list 1->2->3->4->NULL
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original linked list:" << endl;
    displayLinkedList(head);

    // Reverse the linked list using a stack
    reverseLinkedList(head);

    cout << "Reversed linked list:" << endl;
    displayLinkedList(head);

    // Clean up memory
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
