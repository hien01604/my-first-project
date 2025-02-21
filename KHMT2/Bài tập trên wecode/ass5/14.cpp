// Viết chương trình nhập 2 danh sách liên kết đơn l1 và l2. Sắp xếp 2 danh sách l1 và l2 sao cho giá trị các phần tử trong danh sách tăng dần.

// Trộn l1 và l2 vào l sao cho l tăng dần (không sử dụng thuật toán sắp xếp)

// Input: Gồm các phần tử của một danh sách kết thúc bằng số 0 (danh sách không bao gồm số 0)

#include <iostream>
using namespace std;

struct node
{
    int info;
    node *pNext;
};

struct List
{
    node *pHead;
    node *pTail;
};

void CreateList(List &l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}

node *CreateNode(int x)
{
    node *p = new node;
    if (p == nullptr)
    {
        return NULL;
    }
    p->info = x;
    p->pNext = NULL;
    return p;
}

void AddTail(List &l, node *p)
{
    if (l.pHead == NULL)
    {
        l.pHead = l.pTail = p;
    }
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}

void PrintList(List l)
{
    node *p = l.pHead;
    while (p != NULL)
    {
        cout << p->info << " ";
        p = p->pNext;
    }
    cout << endl;
}

void nhap(List &l)
{
    int x;
    while (cin >> x && x != 0)
    {
        node *p = CreateNode(x);
        if (p != nullptr)
        {
            AddTail(l, p);
        }
    }
}

void SortIncrease(List &l)
{
    for (node *p = l.pHead; p != NULL; p = p->pNext)
    {
        for (node *q = p->pNext; q != NULL; q = q->pNext)
        {
            if (p->info > q->info)
            {
                int temp = p->info;
                p->info = q->info;
                q->info = temp;
            }
        }
    }
}

List MergeLists(List l1, List l2)
{
    List l;
    CreateList(l);
    node *p1 = l1.pHead;
    node *p2 = l2.pHead;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->info < p2->info)
        {
            AddTail(l, CreateNode(p1->info));
            p1 = p1->pNext;
        }
        else
        {
            AddTail(l, CreateNode(p2->info));
            p2 = p2->pNext;
        }
    }
    while (p1 != NULL)
    {
        AddTail(l, CreateNode(p1->info));
        p1 = p1->pNext;
    }
    while (p2 != NULL)
    {
        AddTail(l, CreateNode(p2->info));
        p2 = p2->pNext;
    }
    return l;
}

int main()
{
    List l1, l2;
    CreateList(l1);
    CreateList(l2);

    cout << "Nhap danh sach l1 (ket thuc bang 0): ";
    nhap(l1);
    cout << "Nhap danh sach l2 (ket thuc bang 0): ";
    nhap(l2);

    if (l1.pHead == NULL)
    {
        cout << "Danh sach l1 rong." << endl;
    }
    else
    {
        cout << "Danh sach l1 la: ";
        PrintList(l1);
    }

    if (l2.pHead == NULL)
    {
        cout << "Danh sach l2 rong." << endl;
    }
    else
    {
        cout << "Danh sach l2 la: ";
        PrintList(l2);
    }

    if (l1.pHead == NULL || l2.pHead == NULL)
    {
        cout << "Khong tron duoc." << endl;
        return 0;
    }

    SortIncrease(l1);
    cout << "Danh sach l1 sau khi sap xep la: ";
    PrintList(l1);

    SortIncrease(l2);
    cout << "Danh sach l2 sau khi sap xep la: ";
    PrintList(l2);

    if (l1.pHead != NULL && l2.pHead != NULL)
    {
        List l = MergeLists(l1, l2);
        cout << "Ket qua tron l1 voi l2 la: ";
        PrintList(l);
    }

    return 0;
}
