// Viết chương trình nhập danh sách liên kết đơn với mỗi phần tử là một số nguyên và không biết trước lượng phần tử được nhập vào.

//             Việc nhập danh sách kết thúc khi giá trị nhập vào là 0 – không được tính trong danh sách.

//             Tiếp theo, nhập vào số nguyên dương y, xóa tất cả node có info bằng y trong danh sách.

// Dữ liệu vào:

// Danh sách gồm các số nguyên dương x ( 1 ≤ x ≤ 105) cách nhau bởi khoảng trắng. Dãy số kết thúc khi gặp số 0 (số 0 này không nằm trong danh sách).
// Dòng tiếp theo chứa số nguyên y ( 1 ≤ y ≤ 106) cần xóa.
// Tổng số lượng phần tử được nhập vào danh sách không quá 106.
// Dữ liệu ra:

// Nếu danh sách ban đầu rỗng, in ra "Danh sach rong.".
// Nếu danh sách ban đầu không rỗng và tìm thấy y trong danh sách:
// Chương trình xuất danh sách sau khi xóa các node có info bằng y.
// Nếu sau khi xóa các node có info bằng y ta thu được danh sách rỗng thì in “Danh sach rong.”.
// Nếu danh sách ban đầu không rỗng và không tìm thấy y trong danh sach:
// Dòng đầu chương trình xuất ra thông báo “Khong tim thay <y> trong danh sach:”
// Dòng thứ hai xuất danh sách đã nhập.
// Lưu ý: Nếu có in danh sách, sinh viên in theo thứ tự đầu vào của dữ liệu vào.

#include <iostream>
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
    if (head == nullptr) return;

    // Đệ quy để in các Node từ đuôi danh sách đến đầu danh sách
    printListInOrder(head->next);
    cout << head->data << " ";
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

