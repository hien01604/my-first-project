#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList() : head(nullptr), tail(nullptr) {}

    void insert(int value) {
        if (value == 0) return; // Stop insertion when encountering 0

        Node* newNode = new Node(value);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    bool isEmpty() {
        return head == nullptr;
    }

    void print() {
        if (isEmpty()) {
            cout << "Empty List" << endl;
            return;
        }

        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    void balance() {
        if (isEmpty()) {
            cout << "Empty List" << endl;
            return;
        }

        int oddCount = 0, evenCount = 0;
        Node* current = head;
        Node* lastOdd = nullptr;
        Node* lastEven = nullptr;

        while (current) {
            if (current->data % 2 == 0) {
                evenCount++;
                lastEven = current;
            } else {
                oddCount++;
                lastOdd = current;
            }
            current = current->next;
        }

        // Print 1 if the number of odd nodes is equal to the number of even nodes, else print 0
        if (oddCount == evenCount) {
            cout << "Requirement 1: 1" << endl;
            cout << "Requirement 2: Balanced list" << endl;
            return;
        } else {
            cout << "Requirement 1: 0" << endl;
            cout << "Requirement 2: ";
        }

        // Balance the list by inserting nodes
        if (oddCount < evenCount) {
            int diff = evenCount - oddCount;
            for (int i = 0; i < diff; ++i) {
                Node* newNode = new Node(lastOdd ? lastOdd->data : 1);
                if (lastOdd) {
                    newNode->next = lastOdd->next;
                    lastOdd->next = newNode;
                    lastOdd = newNode;
                } else {
                    newNode->next = head;
                    head = newNode;
                }
            }
        } else if (evenCount < oddCount) {
            int diff = oddCount - evenCount;
            for (int i = 0; i < diff; ++i) {
                Node* newNode = new Node(lastEven ? lastEven->data : 2);
                if (lastEven) {
                    newNode->next = lastEven->next;
                    lastEven->next = newNode;
                    lastEven = newNode;
                } else {
                    newNode->next = head;
                    head = newNode;
                }
            }
        }

        // Print the balanced list
        print();
    }
};

int main() {
    LinkedList list;
    int value;

    while (cin >> value && value != 0) {
        list.insert(value);
    }

    list.balance();

    return 0;
}
