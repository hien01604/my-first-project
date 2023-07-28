/* Phép toán giữa các giá trị số
    + - * / %
*/

#include <iostream>
using namespace std;

int main () {
    int a = 100;
    int b = 200;

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    float div = 1.0f*a / b; // số thực
                            // Nếu để int div thì chỉ lấy phần nguyên trong số thập phân 

    int remain = a % b; // chia lấy số dư dùng cho 2 số nguyên

    cout << "Sum of a and b: " << sum << endl;
    cout << "Substruct of a and b: " << sub << endl;
    cout << "Multiply of a and b: " << mul << endl;
    cout << "Divide of a and b: " << div << endl;
    cout << "Remain of a and b: " << remain << endl;

    return 0;
}