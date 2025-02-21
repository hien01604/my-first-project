#include <iostream>
using namespace std;

void nhapMaTran(int a[][100], int &n);
bool kiemTraMaTranFrobenius(int a[][100], int n);

int main() {
    int n;
    int a[100][100];

    nhapMaTran(a, n);

    if (kiemTraMaTranFrobenius(a, n)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}

void nhapMaTran(int a[][100], int &n) {
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}

bool kiemTraMaTranFrobenius(int a[][100], int n) {
    int countCol = 0; // Đếm số cột thỏa mãn điều kiện
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                // Kiểm tra đường chéo chính
                if (a[i][j] != 1) {
                    return false;
                }
            } else {
                // Kiểm tra các phần tử khác
                if (a[i][j] != 0) {
                    if (countCol == 1) {
                        // Đã có một cột thỏa mãn, không thể có thêm cột nào nữa
                        return false;
                    } else {
                        countCol = 1;
                    }
                }
            }
        }
    }
    return true;
}
