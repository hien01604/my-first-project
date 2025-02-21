#include <iostream>
using namespace std;

void nhapMaTran(float a[][100], int &m, int &n);
void NhanMaTran(float a[][100], float b[][100], float c[][100], int m, int n, int l, int k);
void xuatMaTran(float c[][100], int m, int k);

int main() {
    int m, n, l, k;
    float a[100][100], b[100][100], c[100][100];

    nhapMaTran(a, m, n);
    nhapMaTran(b, l, k);

    NhanMaTran(a, b, c, m, n, l, k);

    xuatMaTran(c, m, k);

    return 0;
}

void nhapMaTran(float a[][100], int &m, int &n) {
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}

float Nhan(float a[][100], float b[][100], int n, int x, int z) {
    float var = 0;
    for (int i = 0; i < n; i++) {
        var = var + (a[x][i] * b[i][z]);
    }
    return var;
}

void NhanMaTran(float a[][100], float b[][100], float c[][100], int m, int n, int l, int k) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            c[i][j] = Nhan(a, b, n, i, j);
        }
    }
}

void xuatMaTran(float c[][100], int m, int k) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
}
