/*Write a program to insert nodes into a linked list. The value of each node is an Integer.
The insertion is stopped when the program encounters a node with a "0" value (this node is not inserted into the list).
Count the number of prime numbers in the odd indices.
Suppose that the indices start from 1.*/

#include <iostream>
#include <cmath>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
typedef struct Node *node;

// Cập nhật 1 node
node createNode(int x)
{
    node tmp = new Node();
    if (tmp == nullptr)
    {
        return nullptr;
    }
    tmp->data = data;
    tmp->next = nullptr;
    return tmp;
}

// Kt SNT
bool isPrime(int *x)
{
    if (*x < 2)
        return false;
    for (int i = 2; i < sqrt(*x); i++)
    {
        if (*x % i == 0)
            return false;
    }
    return true;
}

// Hiển thị
void displayNodes(LinkedList head) {
    int count = 0;
    node p = head;
    while (p != nullptr)
    {
    }
}

int main()
{
    node head = nullptr;
}
