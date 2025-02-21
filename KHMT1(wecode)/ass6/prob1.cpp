// phân số
#include <iostream>
using namespace std;
#define MAXN 100

// Khai báo cấu trúc PhanSo
struct PhanSo {
    int tu;
    int mau;
};

// Hàm nhập mảng phân số
void Nhap(PhanSo a[], int &n) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].tu;
        cin >> a[i].mau;
    }
}

// Hàm xuất mảng phân số
void Xuat(PhanSo a[], int n) {
    for (int i = 0; i < n; i++) {
        if(a[i].mau == 0){
            cout << "Khong thoa yeu cau bai toan";
        }else if(a[i].mau < 0){
            cout << -a[i].tu << "/" << a[i].mau;
        }{
        cout << a[i].tu << "/" << a[i].mau;
        }
        cout << endl;
    }

}

// rút gọn phân số
int ucln(int a, int b){
    while(a!=b){
        if(a>b){
            a -= b;
        }
        else{
            b -= a;
        }
    }
    return a;
    }

// Hàm rút gọn phân số
void rutgon(PhanSo &ps) {
    int u = ucln(ps.tu, ps.mau);
    ps.tu /= u;
    ps.mau /= u;
}

// Hàm rút gọn mảng phân số
void rutgonMang(PhanSo a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i].tu != 0) {
            rutgon(a[i]);
        }
    }
}


int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    rutgonMang(a, n);
    Xuat(a, n);
    return 0;
}