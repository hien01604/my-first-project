// Viết chương trình tính số dư của phép chia m cho n

#include <iostream>
using namespace std;
int modulo(int m, int n){
    if(m < n){
        return m;
    }
    return modulo(m - n, n);
}


int main (){
    int m, n; cin >> m >> n;
	cout << modulo(m, n);
}