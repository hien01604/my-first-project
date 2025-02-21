/*Write a program to insert nodes into a linked list.
The value of each node is an Integer.
The insertion is stopped when the program encounters a node with a "0" value
(this node is not inserted into the list). */

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

typedef Node *node;

node makeNode(int x)
{
    node tmp = new Node();
    if (tmp == nullptr)
    {
        return nullptr;
    }
    tmp->data = x;
    tmp->next = nullptr;
    return tmp;
}

node insertNode(int x, node p)
{
    node tmp = makeNode(x);
    p->next = tmp;
    return tmp;
}

void printList(node head)
{
    if (head == nullptr)
    {
        cout << "Danh sach rong.";
        return;
    }
    cout << "Danh sach vua nhap la: ";
    node l = head;
    while (l != nullptr)
    {
        cout << l->data << " ";
        l = l->next;
    }
    cout << endl;
}

int main()
{
    int x;
    cin >> x;

    if (x == 0)
    {
        cout << "Danh sach rong." << endl;
        return 0;
    }

    node head = makeNode(x);
    node p = head;

    while (true)
    {
        cin >> x;
        if (x == 0)
        {
            break;
        }
        p = insertNode(x, p);
    }

    printList(head);
    return 0;
}
