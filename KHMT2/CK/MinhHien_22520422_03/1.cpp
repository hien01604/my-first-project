#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin >> n;
    int **adjMatrix = new int*[n];
    for (int i = 0; i < n; ++i) {
        adjMatrix[i] = new int[n];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> adjMatrix[i][j];
        }
    }

    bool *isolated = new bool[n];
    for (int i = 0; i < n; ++i) {
        isolated[i] = true;
        for (int j = 0; j < n; ++j) {
            if (adjMatrix[i][j] == 1) {
                isolated[i] = false;
                break;
            }
        }
    }

    bool first = true;
    for (int i = 0; i < n; ++i) {
        if (isolated[i]) {
            if (!first) {
                cout << " ";
            }
            cout << i;
            first = false;
        }
    }
    cout << endl;

    for (int i = 0; i < n; ++i) {
        delete[] adjMatrix[i];
    }
    delete[] adjMatrix;
    delete[] isolated;

    return 0;
}