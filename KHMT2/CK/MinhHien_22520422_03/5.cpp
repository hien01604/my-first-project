#include <iostream>
using namespace std;

bool isAllZeros(int matrix[][100], int x, int y, int size) {
    for (int i = x; i < x + size; ++i) {
        for (int j = y; j < y + size; ++j) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int matrix[100][100];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    bool found = false;
    for (int size = 2; size <= n; ++size) {
        for (int i = 0; i <= n - size; ++i) {
            for (int j = 0; j <= n - size; ++j) {
                if (isAllZeros(matrix, i, j, size)) {
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        if (found) break;
    }

    if (found) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}