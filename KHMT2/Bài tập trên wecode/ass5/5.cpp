// Implement a stack using Single Linked List

// suppose that:

// push(a, s) is a function that pushes a to stack s.
// pop(s) is a function that removes an element from a stack.
// Given an integer x and a sequence of integers, write a program to do one of the following operations on the stack s conditionally on the value of each element of the integer sequence:

// call push(a,s) if the element a of the sequence is different from x (a != x).
// call pop(s) if the element a of the sequence is equal to x (a=x). This operation is applied only when the stack is not empty.
// Print out elements of the stack s.

#include <iostream>
#include <string>
using namespace std;

// Node class representing each element in the queue
class Node
{
public:
    char info;
    Node *pNext;
};

// List class representing the queue
class List
{
public:
    Node *pHead;
    Node *pTail;
};

void CreateList(List &l)
{
    l.pHead = l.pTail = nullptr;
}

Node *CreateNode(char x)
{
    Node *p = new Node;
    if (p)
    {
        p->info = x;
        p->pNext = nullptr;
    }
    return p;
}

void AddTail(List &l, Node *p)
{
    if (!l.pHead)
    {
        l.pHead = l.pTail = p;
    }
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}

void Xuat(List l)
{
    Node *current = l.pHead;
    while (current)
    {
        cout << current->info << " ";
        current = current->pNext;
    }
    cout << endl;
}

void enqueue(List &l, char x)
{
    Node *newNode = CreateNode(x);
    if (newNode)
    {
        AddTail(l, newNode);
    }
}

int dequeue(List &l)
{
    if (l.pHead)
    {
        Node *temp = l.pHead;
        int value = temp->info;
        l.pHead = l.pHead->pNext;
        if (!l.pHead)
        {
            l.pTail = nullptr;
        }
        delete temp;
        return value;
    }
    return -1;
}

bool isEmpty(List l)
{
    return (l.pHead == nullptr);
}

int main()
{
    List queue;
    CreateList(queue);

    char c;
    string s;

    // Read character c
    cin >> c;
    // Read string s
    cin.ignore();    // Ignore the newline character after c
    getline(cin, s); // Read the whole line for string s

    if (s.empty())
    {
        cout << "Chuoi rong." << endl;
    }
    else
    {
        bool dequeuedAny = false;
        for (char a : s)
        {
            if (a != c)
            {
                enqueue(queue, a);
            }
            else
            {
                int dequeuedValue = dequeue(queue);
                if (dequeuedValue != -1)
                {
                    dequeuedAny = true;
                    cout << static_cast<char>(dequeuedValue) << " ";
                }
            }
        }

        if (dequeuedAny)
        {
            cout << endl;
        }

        if (isEmpty(queue))
        {
            cout << "Hang doi rong." << endl;
        }
        else
        {
            cout << "Cac gia tri co trong hang doi la: ";
            Xuat(queue);
        }
    }

    return 0;
}
