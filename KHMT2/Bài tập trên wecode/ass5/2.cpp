/*Write a program to insert nodes into a linked list. The value of each node is an Integer.
The insertion is stopped when the program encounters a node with a "0" value
(this node is not inserted into the list).

Count the number of elements of the inserted list.*/

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

int countNode(node a)
{
    int cnt = 0;
    while (a != nullptr)
    {
        cnt++;
        a = a->next;
    }
    return cnt;
}

void printList(node l)
{
    if (l == nullptr)
    {
        cout << "Danh sach rong.";
    }
    else
    {
        cout << "Danh sach vua nhap la: ";
        while (l != nullptr)
        {
            cout << l->data << " ";
            l = l->next;
        }
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

    node l = makeNode(x);
    node p = l;

    while (true)
    {
        cin >> x;
        if (x == 0)
        {
            break;
        }
        p = insertNode(x, p);
    }

    printList(l);
    int count = countNode(l);
    cout << "Danh sach co " << count << " phan tu." << endl;

    return 0;
}
