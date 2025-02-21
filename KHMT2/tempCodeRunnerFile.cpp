#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int sum_of_primes(int n, int count = 0, int current_number = 2, int sum = 0) {
    if (count == n) {
        return sum; // Kết thúc đệ quy khi đã tính tổng đủ n số nguyên tố
    }

    if (isPrime(current_number)) {
        sum += current_number; // Cộng số nguyên tố vào tổng nếu là số nguyên tố
        count++; // Tăng biến đếm lên 1
    }

    return sum_of_primes(n, count, current_number + 1, sum); // Gọi đệ quy với số tiếp theo
}

int main() {
    int n;
    cout << "Nhap so nguyen n (0 < n <= 50): ";
    cin >> n;

    if (n <= 0 || n > 50) {
        cout << "Gia tri vua nhap la " << n << ", khong hop le. Vui long nhap lai." << endl;
    } else {
        int sum = sum_of_primes(n);
        cout << "Tong " << n << " so nguyen to dau tien la: " << sum << endl;
    }

    return 0;
}
