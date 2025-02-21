/*Giả sử có 2 mảng a và b đã được sắp xếp theo thứ tự tăng dần.

Hãy nối 2 mảng a và b thành mảng c sao cho mảng c vẫn đảm bảo 
thứ tự tăng dần (không sử dụng thuật toán sắp xếp trên mảng c)*/

#include<iostream>
using namespace std;
#define SIZE 100;

void nhapA(int arrA[], int &n){
    for (int i = 0; i < n; i ++){
        cin >> arrA[i];
    }
}

void nhapB(int arrB[], int &m){
    for (int i = 0; i < m; j++){
        cin >> arrB[i];
    }
}

void xuat(int arrC[], int n, int m, int k){
    for (int k = 0; k < m+ n; k++){
        cout << arrC[i] << " ";
    }
}

void sapxep(int arrA[], int arrB[], int arrC[],int n, int m, int &k){
    for (int i = 0; i < n; i++){
        arrC[]
    }
}

int main(){
    int n, m, k;
    int arrA[100], arrB[100], arrC[100];

    cin >> n;
    nhapA(arrA, n);

    cin >> m;
    nhapB(arrB, n);

    sapxep(arrA, arrB, arrC, n, m);
    xuat(arrC, n, m);
}