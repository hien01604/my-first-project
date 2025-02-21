// Viết chương trình nhập danh sách liên kết đơn l với mỗi phần tử là một số nguyên, việc nhập kết thúc khi giá trị nhập vào là 0. Sắp xếp danh sách sao cho giá trị các phần tử trong danh sách tăng dần.

// Input: Nhập dãy số nguyên từ bàn phím kết thúc bằng số 0.

// Output: Gồm 2 dòng:

// -         Danh sách các phần từ của danh sách (không tính số 0).

// -         Danh sách các phần tử sau khi sắp xếp.

#include <iostream>
using namespace std;
struct node {
    int info;
    node* pNext;
};
struct List {
    node* pHead;
    node* pTail;
};
void CreateList(List& l) {
    l.pHead = NULL;
    l.pTail = NULL;
}
void SortIncrease(List& l);

void SortIncrease(List& l) {
    for (node* p = l.pHead; p != NULL; p = p->pNext) {
        for (node* q = p->pNext; q != NULL; q = q->pNext) {
            if (p->info > q->info) {
                int temp = p->info;
                p->info = q->info;
                q->info = temp;
            }
        }
    }
}
node* CreateNode(int x) {
    node* p = new node;
    if (p == nullptr) {
        cout << "Khong du bo nho de cap phat node.";
        return NULL;
    }
    p->info = x;
    p->pNext = NULL;
    return p;
}

void AddTail(List& l, node* p) {
    if (l.pHead == NULL) {
        l.pHead = l.pTail = p;
    } else {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}
void nhap(List& l) {
    int x;
    while (cin >> x && x != 0) {
        node* p = CreateNode(x);
        if (p != nullptr) {
            AddTail(l, p);
        }
    }
}

void xuat(List l) {
    if (l.pHead == NULL) {
        cout << "Danh sach rong.";
    } else {
        node* p = l.pHead;
        while (p != NULL) {
            cout << p->info << " ";
            p = p->pNext;
        }
    }
    cout << endl;
}

int main()
{
    List l;
    CreateList(l);
    nhap(l);
    if (l.pHead == NULL) cout << "Danh sach rong.";
    else {
        cout << "Danh sach vua nhap la: ";
        xuat(l);
        SortIncrease(l);
        cout << endl << "Danh sach sau khi sap xep la: ";
        xuat(l);
    }
    return 0;
}