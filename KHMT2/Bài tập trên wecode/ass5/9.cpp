// Viết chương trình nhập danh sách liên kết đơn với mỗi phần tử là một số nguyên và không biết trước lượng phần tử được nhập vào.

//             Việc nhập danh sách kết thúc khi giá trị nhập vào là 0 – không được tính trong danh sách.          

//             Tiếp theo, nhập vào số nguyên dương y, xóa tất cả node có info bằng y trong danh sách.
//             Lưu ý: Nếu có in danh sách, sinh viên in theo thứ tự đầu vào của dữ liệu vào.


#include<iostream>
using namespace std;
// Khai báo cấu trúc Node
struct Node {
    int data;
    Node *next;
};

// Hàm tạo một Node mới với dữ liệu đã cho
Node *createNode(int data) {
    Node *newNode = new Node();
    if (newNode) {
        newNode->data = data;
        newNode->next = nullptr;
    }
    return newNode;
}

// Hàm thêm một Node vào đầu danh sách liên kết
void addNode(Node *&head, int data) {
    Node *newNode = createNode(data);
    if (newNode) {
        newNode->next = head;
        head = newNode;
    }
}

// Hàm kiểm tra danh sách có rỗng không
bool isEmpty(Node *head) {
    return head == nullptr;
}

// Hàm xóa tất cả các Node có giá trị bằng y từ danh sách liên kết
bool removeNodesWithValue(Node *&head, int y) {
    if (isEmpty(head)) return false;

    bool found = false;

    // Xóa các Node có giá trị bằng y từ đầu danh sách
    while (head && head->data == y) {
        Node *temp = head;
        head = head->next;
        delete temp;
        found = true;
    }

    // Xóa các Node có giá trị bằng y từ các Node còn lại
    Node *current = head;
    while (current && current->next) {
        if (current->next->data == y) {
            Node *temp = current->next;
            current->next = current->next->next;
            delete temp;
            found = true;
        } else {
            current = current->next;
        }
    }

    return found;
}


// Hàm in danh sách liên kết theo thứ tự đầu vào của dữ liệu vào
void printListInOrder(Node *head) {
    Node *current = head;
    while (current)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node *head = nullptr;
    int x;

    // Nhập danh sách liên kết
    while (cin >> x && x != 0) {
        addNode(head, x);
    }

    // Nhập giá trị y cần xóa
    int y;
    cin >> y;

    // Kiểm tra và xóa các Node có giá trị bằng y

    // In danh sách sau khi xóa các Node có giá trị bằng y
    if (isEmpty(head))
    {
        cout << "Danh sach rong." << endl;
    }
    else
    {
    bool found = removeNodesWithValue(head, y);

        if (isEmpty(head))
        {
            cout << "Danh sach rong." << endl;
        }
        else if (!found)
        {
            cout << "Khong tim thay " << y << " trong danh sach: " << endl;
            printListInOrder(head);
            cout << endl;
        }
        else
        {
            if (isEmpty(head))
            {
                cout << "Danh sach rong." << endl;
            }
            else
            {
                printListInOrder(head);
                cout << endl;
            }
        }
    }

    return 0;
}