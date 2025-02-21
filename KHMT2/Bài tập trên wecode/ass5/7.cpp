//  Viết chương trình nhập danh sách liên kết đơn với mỗi phần tử là một số nguyên
// và không biết trước lượng phần tử được nhập vào.

//  Việc nhập danh sách kết thúc khi giá trị nhập vào là 0 – không được tính trong danh sách.

//   Xóa các node có info bằng nhau trong danh sách.

// Dữ liệu vào:

// Danh sách gồm các số nguyên dương x ( 1 ≤ x ≤ 106) cách nhau bởi khoảng trắng.
// Dãy số kết thúc khi gặp số 0 (số 0 này không nằm trong danh sách).
// Tổng số lượng phần tử nhập vào danh sách không quá 103.
// Dữ liệu ra:

// Nếu danh sách ban đầu rỗng, in ra "Danh sach rong.".
// Ngược lại, dòng đầu tiên là danh sách đã nhập.
// Dòng tiếp theo là danh sách sau khi xóa số trùng nhau.
// Danh sách sẽ được in ngược lại so với dữ liệu đầu vào,
// mỗi một phần tử của danh sách đã xóa phải có vị trí lớn nhất trong danh sách ban đầu.

#include <iostream>
using namespace std;

// Node struct representing each element in the linked list
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

Node *removeDuplicates(Node *head)
{
    Node *current = head;

    while (current != nullptr && current->next != nullptr)
    {
        Node *runner = current;

        while (runner->next != nullptr)
        {
            if (runner->next->data == current->data)
            {
                // Duplicate found, remove the node
                Node *temp = runner->next;
                runner->next = runner->next->next;
                delete temp;
            }
            else
            {
                runner = runner->next;
            }
        }

        current = current->next;
    }

    return head;
}

int main()
{
    Node *head = nullptr;
    int x;

    // Read the list of integers
    while (cin >> x && x != 0)
    {
        addNode(head, x);
    }
    printList(head);
    cout << endl;

    head = removeDuplicates(head);
    printList(head);

    return 0;
}
