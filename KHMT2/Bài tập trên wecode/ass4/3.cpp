//Viết hàm theo kiểu đệ quy để tính số đảo ngược của số nguyên dương N.

#include<iostream>
using namespace std;

int reverse(int n, int soDaoNguoc = 0){
    if( n == 0){
        return soDaoNguoc;
    }
    else{
        int chuSoCuoi = n % 10;
        soDaoNguoc = soDaoNguoc * 10 + chuSoCuoi;
        int chuSoConLai = n / 10;
        return reverse(n/10, soDaoNguoc);
    }
}

int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}
