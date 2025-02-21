#include <iostream>
#include <cmath>
using namespace std;

double calculateSum(int n) {
    if (n == 1) {
        return sqrt(1);
    }
    return sqrt(n + calculateSum(n - 1));
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (n <= 0) {
        cout << "n phai la so nguyen duong." << endl;
    } else {
        double result = calculateSum(n);
        cout << "S(" << n << ") = " << result << endl;
    }

    return 0;
}
