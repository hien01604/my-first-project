/*Viết chương trình nhập vào số nguyên x sao cho 1 ≤ x ≤ 30. 
Nếu x không thỏa điều kiện, chương trình xuất ra màn hình thông báo “So <x> khong nam trong khoang [1,30].”. 
Nếu x nằm trong khoảng [1,30], chương trình xuất ra màn hình số Fibonacci thứ x.*/

#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n == 2 || n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n;
    cin >> n;
    if(n >= 1 && n <= 30){
        cout << fibonacci(n);
    }
    else{
        cout << "So " << n << " khong nam trong khoang [1,30].";
    }
    return 0;
}