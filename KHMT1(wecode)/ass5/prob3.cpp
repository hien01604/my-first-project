// ma trận đơn vị
#include<iostream>
using namespace std;

void nhap(int a[][100], int &n);
void xuat(int a[][100], int n);
bool isIdentityMatrix(int a[][100], int n);

void nhap(int a[][100], int &n){
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    cout << endl;
}
void xuat(int a[][100], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
bool isIdentityMatrix(int a[][100], int n){
    if(n <= 0 || n > 100 || a[0][0] == 0){
        return false;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j && a[i][j] != 1)
                return false;
            else if(i != j && a[i][j] != 0)
                return false;
        }
    }
    return true;
}

int main(){
    int n;
    int a[100][100];

    nhap(a, n);
    if(isIdentityMatrix(a, n)){
        cout << "True";
    }
    else{
        cout << "False";
    }
}