// Viết chương trình nhập danh sách liên kết đơn l với mỗi phần tử là một số nguyên, 
// việc nhập kết thúc khi giá trị nhập vào là 0. 
// Sắp xếp danh sách sao cho giá trị các phần tử trong danh sách tăng dần.


#include <iostream>
using namespace std;

// Khai báo cấu trúc Node
struct Node {
    int data;
    Node *next;
};

// Hàm tạo một Node mới với dữ liệu đã cho
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Hàm thêm một Node vào cuối danh sách liên kết
void addNode(Node *&head, int data) {
    Node* newNode = createNode(data);
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Hàm in danh sách liên kết
void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Hàm sắp xếp danh sách liên kết theo thứ tự tăng dần
void sortList(Node *&head) {
    for (Node *p = head; p != nullptr; p = p->next) {
        for (Node *q = p->next; q != nullptr; q = q->next) {
            if (p->data > q->data) {
                int temp = p->data;
                p->data = q->data;
                q->data = temp;
            }
        }
    }
}

int main() {
    Node* head = nullptr;
    int x;

    // Nhập danh sách liên kết
    while (cin >> x && x != 0) {
        addNode(head, x);
    }

    // Kiểm tra nếu danh sách rỗng
    if (!head) {
        cout << "Danh sach rong." << endl;
        return 0;
    }

    // In danh sách ban đầu
    cout << "Danh sach vua nhap la: ";
    printList(head);

    // Sắp xếp danh sách
    sortList(head);

    // In danh sách sau khi sắp xếp
    cout << "Danh sach sau khi sap xep la: ";
    printList(head);

    return 0;
}
