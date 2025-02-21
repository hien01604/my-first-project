#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

struct LinkedList
{
    Node *head;
    LinkedList()
    {
        head = nullptr;
    }

    void insertNode(int value)
    {
        if (value == 0)
        {
            return;
        }
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display()
    {
        Node *temp = head;
        if (temp == 0)
        {
            cout << "Danh sach rong.";
        }
        else
        {
            cout << "Danh sach vua nhap la: ";
            while (temp != nullptr)
            {
                cout << temp->data << " ";
                temp = temp->next;
                if (temp->data == 0)
                {
                    break;
                }
            }
        }
    }
};



    int main()
    {
        LinkedList list;
        int value, n;
        cin >> n;
        if (n == 0)
        {
            cout << "Danh sach rong.";
        }
        else
        {
            for (int i = 0; i < n + 1; i++)
            {
                cin >> value;
                if (value == 0)
                {
                    break;
                }
                list.insertNode(value);
            }
            list.display();
        }
        return 0;
    }