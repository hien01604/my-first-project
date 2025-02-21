// Viết chương trình nhập danh sách liên kết đơn với mỗi phần tử là một số nguyên và không biết trước lượng phần tử được nhập vào.

//             Việc nhập danh sách kết thúc khi giá trị nhập vào là 0 – không được tính trong danh sách.          

//             Tiếp theo, nhập vào số nguyên dương y, xóa tất cả node có info bằng y trong danh sách.
// Lưu ý: Nếu có in danh sách, sinh viên in theo thứ tự ngược lại của dữ liệu vào.


#include <iostream>
using namespace std;

// Định nghĩa cấu trúc Node cho danh sách liên kết
struct Node
{
    int data;
    Node *next;
};

// Hàm tạo một Node mới với dữ liệu đã cho
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

// Hàm thêm một Node vào đầu danh sách liên kết
void addNode(Node *&head, int data)
{
    Node *newNode = createNode(data);
    if (newNode)
    {
        newNode->next = head;
        head = newNode;
    }
}

// Hàm đảo ngược danh sách liên kết
Node *reverseList(Node *head)
{
    Node *prev = nullptr;
    Node *current = head;
    Node *nextNode = nullptr;
    while (current != nullptr)
    {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    return prev; // Trả về head của danh sách đã đảo ngược
}

// Hàm in danh sách liên kết theo thứ tự đầu vào
void printListInOrder(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

// Hàm tìm giá trị có số lần xuất hiện nhiều nhất
int mostFrequent(Node *head, int frequency[])
{
    int maxFreq = 0;
    int mostFrequentValue = -1;
    while (head != nullptr)
    {
        frequency[head->data]++;
        if (frequency[head->data] > maxFreq)
        {
            maxFreq = frequency[head->data];
            mostFrequentValue = head->data;
        }
        head = head->next;
    }
    return mostFrequentValue;
}

int main()
{
    Node *head = nullptr;
    int x;

    // Nhập danh sách liên kết
    while (cin >> x && x != 0)
    {
        addNode(head, x);
    }

    if (head == nullptr)
    {
        cout << "Danh sach rong." << endl;
    }
    else
    {
        // Đảo ngược danh sách liên kết
        head = reverseList(head);

        // In ra danh sách theo thứ tự đầu vào
        printListInOrder(head);
        cout << endl;

        // Tạo mảng để lưu tần suất xuất hiện của mỗi giá trị
        const int MAX_VALUE = 1000000;
        int frequency[MAX_VALUE] = {0};

        // Tìm giá trị có số lần xuất hiện nhiều nhất
        int mostFrequentValue = mostFrequent(head, frequency);

        // In ra giá trị có số lần xuất hiện nhiều nhất
        cout << mostFrequentValue << ": " << frequency[mostFrequentValue] << endl;
    }

    return 0;
}
