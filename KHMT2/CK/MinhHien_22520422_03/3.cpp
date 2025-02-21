#include <iostream>
#include <cmath>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void push(Node*& top, int value) {
    Node* newNode = new Node{value, top};
    top = newNode;
}

int pop(Node*& top) {
    if (!top) return -1;
    int value = top->data;
    Node* temp = top;
    top = top->next;
    delete temp;
    return value;
}

bool isPerfectSquare(int num) {
    if (num < 0) return false; 

    int left = 1, right = num;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long square = mid * mid;

        if (square == num) {
            return true;
        } else if (square < num) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}


void printStack(Node* top) {
    if (!top) {
        cout << "Empty Stack" << endl;
        return;
    }
    Node* temp = top;
    while (temp) {
        cout << temp->data;
        if (temp->next) cout << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* top = nullptr;
    int value;

    while (cin >> value && value != 0) {
        push(top, value);
    }

    printStack(top);

    Node* perfectSquares = nullptr;
    Node* temp = top;

    while (temp) {
        if (isPerfectSquare(temp->data)) {
            push(perfectSquares, temp->data);
        }
        temp = temp->next;
    }

    Node* result = nullptr;
    temp = top;

    while (temp) {
        if (isPerfectSquare(temp->data)) {
            push(result, pop(perfectSquares));
        } else {
            push(result, temp->data);
        }
        temp = temp->next;
    }

    Node* finalResult = nullptr;
    while (result) {
        push(finalResult, pop(result));
    }

    printStack(finalResult);

    while (top) {
        pop(top);
    }
    while (finalResult) {
        pop(finalResult);
    }

    return 0;
}
