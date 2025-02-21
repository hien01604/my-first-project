//tinh tong cac chu so cua mot so

#include<iostream>
using namespace std;

int main(){
    int n, d = 0, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++){
        d = n % 10;
        sum += d;
        n = n / 10;
    }

    cout << sum;
}