/*Các số nguyên tố sinh đôi (twin prime) là các số nguyên tố mà khoảng cách giữa chúng là 2. 
Hãy in tất cả cặp số sinh đôi nhỏ hơn một số nguyên dương cho trước (số nguyên dương này < 1000)*/

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

void checkTwinPrime(int n){
    int count = 0;
    for (int i = 2; i <= n; i++){
        if(isPrime(i) && isPrime(i-2)){
            count++;
            cout << i - 2 << ", " << i << endl;
        }
    }
    cout << "Tong co " << count << " cap so sinh doi < " << n << endl;
}
int main(){
    int n;
    cin >> n;

    checkTwinPrime(n);
}