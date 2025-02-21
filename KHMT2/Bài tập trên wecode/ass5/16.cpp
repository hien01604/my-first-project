#include <iostream>
using namespace std;

struct Node {
    int data;
    int count;
    Node* next;
};

struct List {
    Node* head;
    Node* tail;
};

void createList(List &l) {
    l.head = nullptr;
    l.tail = nullptr;
}

Node* createNode(int x) {
    Node* p = new Node;
    p->data = x;
    p->count = 1;
    p->next = nullptr;
    return p;
}

void addTail(List &l, Node* p) {
    if (l.head == nullptr) {
        l.head = l.tail = p;
    } else {
        l.tail->next = p;
        l.tail = p;
    }
}

void printList(const List &l) {
    Node* p = l.head;
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void nhap(List &l) {
    int x;
    while (cin >> x && x != 0) {
        Node* p = createNode(x);
        addTail(l, p);
    }
}

void countOccurrences(List &l) {
    Node* p = l.head;
    while (p != nullptr) {
        Node* q = l.head;
        while (q != p) {
            if (q->data == p->data) {
                q->count++;
                p->count--;
                break;
            }
            q = q->next;
        }
        p = p->next;
    }
}

void printOccurrences(const List &l) {
    Node* p = l.head;
    while (p != nullptr) {
        if (p->count > 0) {
            cout << p->data << ": " << p->count << endl;
        }
        p = p->next;
    }
}

int main() {
    List l;
    createList(l);
    nhap(l);
    
    if (l.head == nullptr) {
        cout << "Danh sach rong." << endl;
    } else {
        cout << "Danh sach vua nhap la: ";
        printList(l);

        countOccurrences(l);

        cout << "So lan xuat hien cua tung phan tu trong danh sach la:" << endl;
        printOccurrences(l);
    }
    return 0;
}
