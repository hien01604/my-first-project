/* Hàm (function) trong C++
    Lesson  Nội dung chính
    1.      Tổng quan về hàm
    2.      Truyền tham chiếu, truyền giá trị
    3.      Kiểu trả vè của hàm main
    4.      Hàm inline
    5.      Tham số mặc định của hàm 
    6.      Hàm nguyên mẫu
    7.      Hàm đệ quy
    8.      Sử dụng project trong C++
    
    $1. Tổng quan về hàm trong C++
        - Lý do
        - Định nghĩa, quy ước đặt tên hàm
        - Kiểu trả về của hàm
        - Tham số, đổi số

        type functionName(parameter list) {

        }
    */

#include <iostream>
using namespace std;

int addTwoNumber(int a, int b) {
    return ( a + b);
} 

float divAbyB(int a, int b) {
    return 1.0f * a / b;
}

void showResult(float result) {
    cout << "Result =" << result << endl;
}

int main() {
    int a = 100; int b = 255;
    int sumOfAAndB = addTwoNumber(a, b);
    cout << addTwoNumber(a, b) <<endl;
    float divAforB = divAbyB(a, b);

    showResult(sumOfAAndB);
    showResult(divAforB);

    return 0;
}
