#include <string>
#include <iostream>
using namespace std;

struct node {
    char info;
    node* pNext;
};

struct List {
    node* pHead;
    node* pTail;
};

void CreateList(List& l) {
    l.pHead = l.pTail = nullptr;
}

node* CreateNode(char x) {
    node* p = new node;
    p->info = x;
    p->pNext = nullptr;
    return p;
}

void AddTail(List& l, node* p) {
    if (l.pHead == nullptr)
        l.pHead = l.pTail = p;
    else {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}

void Xuat(List l) {
    node* p = l.pHead;
    while (p != nullptr) {
        cout << p->info << " ";
        p = p->pNext;
    }
}

void enqueue(List& l, char x) {
    node* p = CreateNode(x);
    AddTail(l, p);
}

bool isEmpty(List l) {
    return l.pHead == nullptr;
}

int dequeue(List& l) {
    if (isEmpty(l)) return -1; // If the queue is empty
    char data = l.pHead->info;
    node* temp = l.pHead;
    l.pHead = l.pHead->pNext;
    delete temp;
    if (l.pHead == nullptr) l.pTail = nullptr; // If queue becomes empty after dequeue
    return data;
}

int main() {
    char c;
    cin >> c;
    string s = "";
    cin >> s;
    List queue;
    CreateList(queue);

    // Implementing queue operations
    for (char ch : s) {
        if (ch != c)
            enqueue(queue, ch);
        else {
            int dequeued = dequeue(queue);
            if (dequeued != -1)
                cout << dequeued << endl;
        }
    }

    // Output
    if (isEmpty(queue))
        cout << "Hang doi rong." << endl;
    else {
        cout << "Cac gia tri co trong hang doi la: ";
        Xuat(queue);
        cout << endl;
    }

    return 0;
}
