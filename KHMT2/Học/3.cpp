#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

// Stack class implementation using a single linked list
class Stack
{
private:
    Node *top; // Pointer to the top of the stack
public:
    Stack() : top(nullptr) {} // Constructor to initialize the stack

    // Function to push an element onto the stack
    void push(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }

    // Function to pop an element from the stack
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return -1; // Return -1 if stack is empty
        }
        int popped = top->data;
        Node *temp = top;
        top = top->next;
        delete temp;
        return popped;
    }

    // Function to check if the stack is empty
    bool isEmpty()
    {
        return top == nullptr;
    }
};

// Function to convert a positive integer from decimal to binary using stack
void decimalToBinary(int num)
{
    Stack stack;
    while (num > 0)
    {
        stack.push(num % 2);
        num /= 2;
    }
    cout << "Binary representation: ";
    while (!stack.isEmpty())
    {
        cout << stack.pop();
    }
    cout << endl;
}

int main()
{
    int decimal;
    cout << "Enter a positive integer in decimal: ";
    cin >> decimal;
    decimalToBinary(decimal);
    return 0;
}
