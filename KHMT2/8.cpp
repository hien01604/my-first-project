// Viết chương trình tìm số lớn nhất trong các số nguyên dương được nhập vào.

#include <iostream>
using namespace std;

int largest_input()
{
    int input;
    int largest = 0;
    cin >> input;
    if(input == 0 ){
        return largest;
    }
    else{
        if(input > largest){
            largest = input;
        }
    }
    return largest_input();
}
int main()
{
    cout << largest_input();
}
