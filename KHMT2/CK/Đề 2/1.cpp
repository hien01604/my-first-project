#include <iostream>
#include <iomanip>
using namespace std;

void updateMatrix(double** matrix, int N) {
    for (int i = 0; i < N; ++i) {
        double sum = 0;
        int count = 0;
        
        // Calculate sum of the row i and count non-zero elements
        for (int j = 0; j < N; ++j) {
            if (matrix[i][j] != 0) {
                sum += matrix[i][j];
                ++count;
            }
        }
        
        // Calculate the average value of the row i
        double average;
        if (count > 0) {
            average = sum / count;
        } else {
            average = 0;
        }
        
        // Replace the zero values with the row's average
        for (int j = 0; j < N; ++j) {
            if (matrix[i][j] == 0) {
                matrix[i][j] = average;
            }
        }
    }
}

void printMatrix(double** matrix, int N) {
    cout << setprecision(2);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matrix[i][j];
            if (j < N - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;

    // Dynamically allocate the matrix
    double** matrix = new double*[N];
    for (int i = 0; i < N; ++i) {
        matrix[i] = new double[N];
    }

    // Read the matrix values
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Update the matrix as per the requirement
    updateMatrix(matrix, N);

    // Print the updated matrix
    printMatrix(matrix, N);

    // Deallocate the matrix
    for (int i = 0; i < N; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
