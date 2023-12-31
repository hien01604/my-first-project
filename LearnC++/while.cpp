/* Cấu trúc lập while

while(điều_kiện) {
    nội dung cần thực hiện lặp
}
Ví dụ sử dụng vòng lặp while:
Viết chương trình lập n lần việc nhập vào giá trị nguyên dương và hiển thị giá trị đảo của số vừa nhập.
Ví dụ n = 3:
    Lần 1: nhập 123 --> 321
    Lần 2: nhập 565656 --> 656565
    Lần 3: nhập 98877 --> 77889

*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << "Nhap so duong n: ";
    if (n > 0) {
        while(n--) {
            int t;
            cout << "Nhap so can dao: ";
            cin >> t;
            cout << t << "--> ";
            int tDao = 0;
            while (t) {
                tDao = tDao * 10 + t % 10;
                t /= 10;

            /* 123 --> 321
            dao = 3; t = 12
            dao = 30 + 2 = 32; t = 1;
            320 + 1 = 321; 0
            */ 
  
    
            } 
            cout << tDao << endl;
        }
    } 
    else {
        cout << "Vui long nhap n > 0!" << endl;
    }
    return 0;
}