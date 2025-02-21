#include <iostream>
using namespace std;

int main(){
    int n, a, m = 0, i = 1;
    cin >> n;
    a = n;
    if(n < 0){
        cout << "Khong dx";
    }
    else{
        while (a > 0){
            m = m * 10 + a % 10;
            a = a / 10;
        }
        if( m == n){
            cout << "Dx";
        }
        else{
            cout << "Khong dx";
        }
    }
    return 0;
}