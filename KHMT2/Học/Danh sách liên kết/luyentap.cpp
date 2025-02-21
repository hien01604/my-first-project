#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
typedef Node *node;

// Cap phat dong mot node moi voi du lieu la so nguyen x
node makeNode(int x)
{
    node tmp = new node();
    tmp->data = x;
    tmp->next = nullptr;
}

// Kiem tra rong
bool isEmpty(node a)
{
    return a == nullptr;
}

// Dem node
int size(node a)
{
    int count = 0;
    while (a != nullptr)
    {
        a = a->next;
        count++;
    }
    return count;
}

// them 1 phan tu vao dau danh sach lien ket
void insertFirst(node &a, int x)
{
    node tmp = new node();
    node a = makeNode(x);
    if (a = nullptr)
    {
        a = tmp;
    }
    else
    {
        tmp->next = a;
        a = tmp;
    }
}

// Them 1 phan tu vao cuoi dslk
void insertLast(node &a, int x)
{
    node a = makeNode(x);
    if (a = nullptr)
    {
        a = tmp;
    }
    else
    {
        node p = a;
        while (p->next != nullptr)
        {
            p = p->next;
        }
        p->next = tmp;
    }
}

// Them 1 phan tu vao giua
void insertMiddle(node &a, int x, int pos)
{
    int n = size(a);
    if (pos <= 0 || pos > n + 1)
    {
        cout << "Vi tri khong hop le";
    }
    if (pos == 1)
    {
        insertFirst(a, x);
        return;
    }
    else if (pos == n + 1)
    {
        insertLast(a, x);
        return;
    }
    node p = a;
    for (int i = 1; i < pos - 1; i++)
    {
        p = p->next;
    }
    node tmp = makeNode(x);
    tmp->next = p->next;
    p->next = tmp;
}

// sap xep
void sapxep(node &a)
{
    for (node p = a; p->next != nullptr; p = p->next)
    {
        node min = p;
        for (node q = p->next; q->next != nullptr; q = q->next)
        {
            if (q->data < min->data)
            {
                min = q;
            }
        }
        int tmp = tmp->data;
        tmp->data = p->data;
        p->data = tmp;
    }
}

// xuat list
void display(node a)
{
    while (a != nullptr)
    {
        cout << a->data << " ";
        a = a->next;
    }
}

// xoa phan tu o dau
void deleteFrist(node &a)
{
    if (a == nullptr)
        return;
    a = a->next;
}

// xoa phan tu o cuoi
void deleteLast(node &a)
{
    if (a == nullptr)
        return;
    node truoc = nullptr, sau = a;
    while (sau->next != nullptr)
    {
        truoc = sau;
        sau = sau->next;
    }
    if (truoc == nullptr)
    {
        a = nullptr;
    }
    else
    {
        truoc->next = nullptr;
    }
}

// Xoa o giua
void deleteMiddle(node&a, int pos){
    int n = size(a);
    if(pos < 0 || pos > n)
        return;
    node truoc = nullptr;
    node sau = a;
    for (int i = 1; i < n; i++){
        truoc = sau;
        sau = sau->next;
    }
    if(truoc == nullptr){
        a = a->next;
    }else{
        truoc->next = sau->next;
    }
}
