// tính tổng đường chéo
#include<iostream>
using namespace std;

void nhap(double a[][100], int &n, int &m);
void xuat(double a[][100], int n);

void nhap(double a[][100], int &n, int &m){
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
}
void xuat(double a[][100], int n, int m){
    double sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if( i == j){
                sum += a[i][j];
            }
        }
    }
    cout << sum;
}
int main(){
    int n, m;
    double sum;
    double a[100][100];

    nhap(a, n, m);
    xuat(a, n, m);
}
