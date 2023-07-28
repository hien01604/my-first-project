/* mảng động trong c++
Cú pháp kiểu *tên_mảng = new kiểu[số phần tử];
Khi nào sử dụng mảng tĩnh, mảng động?
*/

#include <iostream>
using namespace std;

int main() {

    int arr[10];
    int* otherArray = new int[10];
    for (size_t i = 0; i < 10; i++)
    {
        arr[i] = 0;
        cout << arr[i] << " ";
    }
    cout << "\nMang cap phat dong: \n";

    for (size_t i = 0; i < 10; i++)
    {
        otherArray[i] = -1;
        cout << otherArray[i] << " ";
    }
    return 0;
}