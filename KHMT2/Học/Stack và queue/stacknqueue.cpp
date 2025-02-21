#include<iostream>
using namespace std;

// stack : LIFO ( Last in first out )

class Node{
    public:
    int data;
    Node *next;
};
typedef Node* node;

node makeNode(int a){
    node tmp = new Node();
    tmp->data = a;
    tmp->next = nullptr;
    return tmp;
}

// thêm 1 node ở đầu
void push(node &s, int a){
    node tmp = makeNode(a);
    if(s == nullptr){
        s = tmp;
    } else {
        tmp->next = s;
        s = tmp;
    }
}

// xóa 1 node ở đầu
void pop(node &s){
    if(s == nullptr){
        cout << "Stack rong.\n";
        return;
    }
    s = s->next;
}

// xuất ra màn hình 
void print(node s){
    if(s == nullptr){
        cout << "Stack rong.\n";
        return;
    }
    cout << "Cac gia tri co trong stack la: ";
    while(s != nullptr){
        cout << s->data << " ";
        s = s->next;
    }
    cout << endl;
}

int main(){
    node s = nullptr; 
    int x, a;
    
    cin >> x; 
    while(true){
        cin >> a;
        if(a == 0)
            break;
        else if(a != x)
            push(s, a); 
        else
            pop(s); 
    }
    print(s);
    return 0;
}
