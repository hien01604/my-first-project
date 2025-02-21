#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x) : data(x), next(nullptr) {}
};

class LinkedList
{
public:
    Node *head;

    LinkedList() : head(nullptr) {}

    // Function to add a node at the end of the list
    void addNode(int x)
    {
        Node *newNode = new Node(x);
        if (!head)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to balance the list with equal number of odd and even nodes
    void balanceList()
    {
        int oddCount = 0, evenCount = 0;
        Node *temp = head;
        Node *lastOdd = nullptr;
        Node *lastEven = nullptr;

        // Counting odd and even nodes
        while (temp)
        {
            if (temp->data % 2 == 0)
            {
                evenCount++;
                lastEven = temp;
            }
            else
            {
                oddCount++;
                lastOdd = temp;
            }
            temp = temp->next;
        }

        // Balancing odd nodes if they are fewer
        while (oddCount < evenCount)
        {
            int newData;
            if (lastOdd)
            {
                newData = lastOdd->data;
            }
            else
            {
                newData = 1;
            }
            Node *newNode = new Node(newData);
        }

        // Balancing even nodes if they are fewer
        while (evenCount < oddCount)
        {
            Node *newNode = new Node(lastEven ? lastEven->data : 2);
            if (lastEven)
            {
                newNode->next = lastEven->next;
                lastEven->next = newNode;
                lastEven = newNode;
            }
            else
            {
                newNode->next = head;
                head = newNode;
                lastEven = head;
            }
            evenCount++;
        }
    }

    // Function to print the list
    void printList()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList list;
    list.addNode(3);
    list.addNode(4);
    list.addNode(5);
    list.addNode(6);

    cout << "Original List: ";
    list.printList();

    list.balanceList();

    cout << "Balanced List: ";
    list.printList();

    return 0;
}
