/*Vòng lập vô hạn, break, continue*/

#include <iostream>
using namespace std;

int main(){
    // char input;
    // for (;;) {
    //     cout <<"Nhap q de thoat chuong trinh! ";
    //     cin >> input;
    //     if (input == 'q' || input == 'Q') {
    //         break;
    //     }
    // }
    
    for (size_t i = 0; i < 10; i++)
    {
        if (i % 2 == 0) {
            continue; // output ra số chẵn --> bỏ qua những giá trị thỏa đk
        }
        cout << i << endl;

    return 0;
}