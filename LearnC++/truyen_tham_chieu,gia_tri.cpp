/* Truyền tham chiếu và truyền giá trị
    - Truyền tham chiếu khi muốn cho phép hàm thay đổi giá trị biến truyền vào hàm
    - Truyền giá trị khi kiểu của tham số là những kiểu đơn giản
    
*/

#include <iostream>
using namespace std;


void updateBalance(int& balance, int change) {
    balance += change;
}

int main() {

    int amount = 1000; // nao tien vao tk the
    updateBalance(amount, 2000);

    cout << amount << endl;

    updateBalance(amount, -3000); // rut tien

    cout << "So du tk sau khi rut: " << amount << endl;

    return 0;
}