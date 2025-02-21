#include <iostream>
using namespace std;

// Node structure for singly linked list
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to push an element onto the stack
void push(Node*& top, int value) {
    Node* newNode = new Node(value);
    newNode->next = top;
    top = newNode;
}

// Function to check if the stack is empty
bool isEmpty(Node* top) {
    return top == nullptr;
}

// Function to pop an element from the stack
void pop(Node*& top) {
    if (isEmpty(top)) {
        cout << "Stack rong.\n";
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
}

// Function to print elements of the stack
void printStack(Node* top) {
    if (isEmpty(top)) {
        cout << "Stack rong.\n";
        return;
    }
    Node* current = top;
    cout << "Cac gia tri co trong stack la: ";
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Main function
int main() {
    int x;
    cin >> x; // Input the integer x
    int num;
    Node* top = nullptr; // Pointer to the top of the stack

    // Read input sequence until encountering 0
    while (cin >> num && num != 0) {
        if (num != x) {
            push(top, num); // Push to stack if not equal to x
        } else {
            if (!isEmpty(top)) {
                pop(top); // Pop from stack if equal to x and stack is not empty
            }
        }
    }

    printStack(top); // Print elements of the stack

    // Free memory for all nodes
    while (top != nullptr) {
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    return 0;
}