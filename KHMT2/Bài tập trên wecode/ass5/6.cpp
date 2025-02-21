// Viết chương trình nhập danh sách liên kết đơn với mỗi phần tử là một số nguyên và không biết trước lượng phần tử được nhập vào.

//             Việc nhập danh sách kết thúc khi giá trị nhập vào là 0 – không được tính trong danh sách.

//             Nhập số nguyên y, xóa số y đầu tiên trong danh sách.

// Dữ liệu vào:

// Danh sách gồm các số nguyên dương x ( 1 ≤ x ≤ 106) cách nhau bởi khoảng trắng. Dãy số kết thúc khi gặp số 0 (số 0 này không nằm trong danh sách).
// Hàng tiếp theo chứa số nguyên y cần xóa. ( 1 ≤ y ≤ 106)
// Tổng số lượng các phần tử trong danh sách không quá 106.
// Dữ liệu ra:

// Nếu danh sách ban đầu rỗng, in ra "Danh sach rong.".
// Nếu tìm thấy y trong danh sách, chương trình xuất danh sách sau khi xóa số nguyên y đầu tiên. Trường hợp sau khi xóa số nguyên y, danh sách ban đầu trở thành rỗng thì in “Danh sach rong.”.
// Ngược lại, chương trình xuất ra thông báo “Khong tim thay <y> trong danh sach:” trước khi xuất danh sách đã nhập.
// Lưu ý: Nếu có in danh sách, sinh viên in NGƯỢC với thứ tự đầu vào của dữ liệu vào.

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNode(int data)
{
    Node *newNode = new Node();
    if (newNode)
    {
        newNode->data = data;
        newNode->next = nullptr;
    }
    return newNode;
}

void addNode(Node *&head, int data)
{
    Node *newNode = createNode(data);
    if (newNode)
    {
        newNode->next = head;
        head = newNode;
    }
}

bool deleteFirstOccurrence(Node *&head, int y)
{
    if (!head)
        return false;

    Node *current = head;
    Node *prev = nullptr;

    while (current)
    {
        if (current->data == y)
        {
            if (prev)
            {
                prev->next = current->next;
            }
            else
            {
                head = current->next;
            }
            delete current;
            return true;
        }
        prev = current;
        current = current->next;
    }
    return false;
}

void printList(Node *head)
{
    Node *current = head;
    while (current)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

bool isEmpty(Node *head)
{
    return head == nullptr;
}

int main()
{
    Node *head = nullptr;
    int x;

    while (cin >> x && x != 0)
    {
        addNode(head, x);
    }

    int y;
    cin >> y;

    if (isEmpty(head))
    {
        cout << "Danh sach rong." << endl;
    }
    else
    {
        bool found = deleteFirstOccurrence(head, y);

        if (isEmpty(head))
        {
            cout << "Danh sach rong." << endl;
        }
        else if (!found)
        {
            cout << "Khong tim thay " << y << " trong danh sach: " << endl;
            printList(head);
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
                printList(head);
                cout << endl;
            }
        }
    }

    return 0;
}
