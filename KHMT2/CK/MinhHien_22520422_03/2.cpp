#include <iostream>
#include <cmath>
using namespace std;

struct Node {
    int value;
    Node* next;
    Node(int v) : value(v), next(nullptr) {}
};

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

void insertNode(Node*& head, int value) {
    if (value == 0) return;
    if (!head) {
        head = new Node(value);
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = new Node(value);
    }
}

void deletePrimesBeforeIndex(Node*& head, int index) {
    Node* temp = head;
    Node* prev = nullptr;
    int count = 0;
    while (temp && count < index) {
        Node* next = temp->next;
        if (isPrime(temp->value)) {
            if (prev) {
                prev->next = next;
            } else {
                head = next;
            }
            delete temp;
        } else {
            prev = temp;
        }
        temp = next;
        count++;
    }
}

void printList(Node* head) {
    if (!head) {
        cout << "Empty List" << endl;
        return;
    }
    Node* temp = head;
    while (temp) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int countPrimes(Node* head, int start, int end) {
    Node* temp = head;
    int count = 0;
    int index = 0;
    while (temp && index <= end) {
        if (index >= start && isPrime(temp->value)) {
            count++;
        }
        temp = temp->next;
        index++;
    }
    return count;
}

int findIndex(Node* head) {
    Node* temp = head;
    int totalNodes = 0;
    while (temp) {
        totalNodes++;
        temp = temp->next;
    }

    for (int i = totalNodes - 1; i >= 0; --i) {
        int primesBefore = countPrimes(head, 0, i - 1);
        int primesAfter = countPrimes(head, i + 1, totalNodes - 1);
        if (primesBefore == 2 * primesAfter) {
            return i;
        }
    }
    return -1;
}

int main() {
    Node* head = nullptr;
    int value;
    while (cin >> value) {
        if (value == 0) break;
        insertNode(head, value);
    }

    printList(head);

    int index = findIndex(head);
    if (index == -1) {
        cout << "not found" << endl;
    } else {
        cout << index << endl;
        deletePrimesBeforeIndex(head, index);
        printList(head);
    }

    return 0;
}