/* Mảng kí tự trong C++
- Luôn kết thúc bởi kí tự null '\0'
- Lấy độ dài thực tế của mảng kí tự 
*/

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "enter your age: ";
    cin >> age;

    cin.ignore(); // loại bỏ kí tự không mong muốn, enter

    cout << "enter your name: ";
    char fullName[200];
    cin.getline(fullName, 199); // nhỏ hơn giá trị khai báo 1 đơn vị
                                // nhập vào cụm kí tự có chứa dấu cách
    cout << "Hello " << fullName << ", you are " << age << endl;

    return 0;
}