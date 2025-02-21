#include<iostream>
using namespace std;

int main(){
    int m, n;
    double arr[100][100];

    // Taking user input for the dimensions of the 2D array
    cin >> m >> n;

    // Taking user input for each element of the 2D array
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    // Printing the elements of the 2D array
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl; // Move to the next row after printing each row
    }
}

