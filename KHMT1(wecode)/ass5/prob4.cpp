// ma trận chuyển vị
#include<iostream>
using namespace std;
#define MAX 16

void nhap(double arr[][MAX], int &n, int&m);
void xuat(double arr[][MAX], int n);

void nhap(double arr[][MAX], int &n, int&m){
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j ++){
            cin >> arr[i][j];
        }
    }
    cout << endl;
}
void xuat(double arr[][MAX], int n, int m){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j ++){
            cout << arr[j][i] << " ";
        }
            cout << endl;
    }

}

int main(){
    int n, m;
    double arr[MAX][MAX];

    nhap(arr, n, m);
    xuat(arr, n, m);
}