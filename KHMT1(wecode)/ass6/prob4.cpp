#include <iostream>
using namespace std; 

struct PhanSo{
    int tuso;
    int mauso;
};
void Nhap(PhanSo &a){
    cin>>a.tuso>>a.mauso;
}
PhanSo Nhap(){
    PhanSo b;
    cin>>b.tuso>>b.mauso;
    return b;
}
int UCLN (int a,int b){
    while (b!=0){
        int temp = b;
        b = a % b;
        a=temp;
    }
    return a;
}
PhanSo RutGon(PhanSo n) {
    int ucln = UCLN(abs(n.tuso), abs(n.mauso));
    n.tuso /= ucln;
    n.mauso /= ucln;

    if (n.mauso < 0) {
        n.tuso = -n.tuso;
        n.mauso = -n.mauso;
    }

    return n;
}
PhanSo Chia(PhanSo a,PhanSo b){
    PhanSo n;
    n.tuso=a.tuso*b.mauso;
    n.mauso=a.mauso*b.tuso;
    return n;
}
void Xuat(PhanSo n) {
    n = RutGon(n);
    if (n.tuso == 0) {
        cout << "0";
    } else if (n.mauso == 1) {
        cout << n.tuso;
    } else {

        cout << n.tuso << "/" << n.mauso;
    }
}