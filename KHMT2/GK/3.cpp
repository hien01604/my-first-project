#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    void push(int x) {
        Node* newNode = new Node;
        newNode->data = x;
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (isEmpty()) {
            cerr << "Stack is empty." << endl;
            return -1; // Return some default value indicating error
        }
        int data = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return data;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void print() {
        Node* current = top;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    void sortStack() {
        Stack evenStack, oddStack;
        while (!isEmpty()) {
            int data = pop();
            if (data == 0) break;
            if (data % 2 == 0) {
                evenStack.push(data);
            } else {
                oddStack.push(data);
            }
        }
        while (!oddStack.isEmpty()) {
            push(oddStack.pop());
        }
        while (!evenStack.isEmpty()) {
            push(evenStack.pop());
        }
    }
};

int main() {
    Stack stack;
    int x;
    while (cin >> x && x != 0) {
        stack.push(x);
    }
    cout << "Original Stack: ";
    stack.print();
    cout << "Stack after sorting: ";
    stack.sortStack();
    stack.print();
    return 0;
}
