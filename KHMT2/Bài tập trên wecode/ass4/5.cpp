//Viết hàm tìm ước số chung lớn nhất của hai số nguyên dương M và N.

#include<iostream>
using namespace std; 

int gcd(int m , int n){
    if(n == 0)
        return m;
    return gcd(n, m % n);
}

int main() {
	int m, n;
	cin >> m >> n;
	cout << gcd(m, n);
	return 0;
}
