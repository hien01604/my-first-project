// Viết chương trình nhập danh sách liên kết đơn l với mỗi phần tử là một số nguyên,
// việc nhập kết thúc khi giá trị nhập vào là 0.
// Kiểm tra xem giá trị các phần tử trong danh sách có theo thứ tự tăng dần không?
// Nếu giá trị các phần tử trong danh sách theo thứ tự tăng dần,
// chèn phần tử có giá trị bằng x vào danh sách sao cho danh sách vẫn tăng dần?

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct List {
    Node* head;
    Node* tail;
};

void createList(List& l) {
    l.head = nullptr;
    l.tail = nullptr;
}

Node* createNode(int x) {
    Node* p = new Node;
    if (p == nullptr) {
        return nullptr;
    }
    p->data = x;
    p->next = nullptr;
    return p;
}

void addTail(List& l, Node* p) {
    if (l.head == nullptr) {
        l.head = l.tail = p;
    } else {
        l.tail->next = p;
        l.tail = p;
    }
}

void printList(const List& l) {
    Node* p = l.head;
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void nhap(List& l) {
    int x;
    while (cin >> x && x != 0) {
        Node* p = createNode(x);
        if (p != nullptr) {
            addTail(l, p);
        }
    }
}

bool isIncreasing(const List& l) {
    Node* p = l.head;
    while (p != nullptr && p->next != nullptr) {
        if (p->data > p->next->data) {
            return false;
        }
        p = p->next;
    }
    return true;
}

void insertSorted(List& l, int x) {
    Node* newNode = createNode(x);
    if (newNode == nullptr) {
        return;
    }

    if (l.head == nullptr || l.head->data >= x) {
        newNode->next = l.head;
        l.head = newNode;
        if (l.tail == nullptr) {
            l.tail = newNode;
        }
    } else {
        Node* current = l.head;
        while (current->next != nullptr && current->next->data < x) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
        if (newNode->next == nullptr) {
            l.tail = newNode;
        }
    }
}

int main() {
    List l;
    createList(l);
    nhap(l);
    int x;

    if (l.head == nullptr) {
        cout << "Danh sach rong." << endl;
        return 0;
    }

    cout << "Danh sach vua nhap la: ";
    printList(l);

    if (!isIncreasing(l)) {
        cout << "Danh sach khong tang." << endl;
    } else {
        insertSorted(l, x);
        cout << "Danh sach sau khi chen " << x << " la: ";
        printList(l);
    }
    return 0;
}
