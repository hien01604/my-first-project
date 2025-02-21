#include <iostream>
using namespace std;

    // Hàm tính số Fibonacci
    int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}


int main() {
    // Input: Số nguyên n
    int n;
    cout << "Nhap vao so nguyen n (2 <= n <= 16): ";
    cin >> n;

    // Kiểm tra điều kiện 2 <= n <= 16
    if (n < 2 || n > 16) {
        return 1; // Kết thúc chương trình với mã lỗi
    }

    // Tạo ma trận vuông với số dòng = số cột = n
    int fibMatrix[16][16];

    // Tính và gán giá trị cho từng phần tử theo yêu cầu
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int fibNumber = fib(i + j + 1); // Số Fibonacci thứ i+j+1
            fibMatrix[i][j] = fibNumber;
        }
    }

    // Output: Ma trận vuông
    cout << "Ma tran vuong voi so dong = so cot = " << n << " sao cho phan tu o dong i, cot j la so Fibonacci thu i+j+1:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << fibMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0; // Kết thúc chương trình mà không có lỗi
}


