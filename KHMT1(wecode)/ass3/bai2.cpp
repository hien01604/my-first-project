/*Viết chương trình tính Kiểm tra một số có phải là số nguyên tố hay không.
- Trả về 0 nếu n là hợp số, tức không phải là số nguyên tố
- Trả về 1 nếu n là số nguyên tố
- Trả về -1 nếu không phải là số nguyên tố cũng không phải là hợp số*/
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    if(n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(){
    int n;
    cout << "Nhap vao mot so nguyen: ";
    cin >> n;

    if(n == 1){
        cout << "-1";
    }
    if(isPrime(n)){
        cout << "1";
    }
    else{
        cout << "0";
    }
    return 0;
}