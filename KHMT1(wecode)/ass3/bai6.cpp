#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, x;

    cin >> n >> x;

    int sum1 = 1, sum2 = 1, giaithua = 1;
    float sum3 = 1;

    for (int i = 1; i <= n; i++){
        sum1 += pow(x, i);
    }
    for (int i = 1; i <= 2 * n; i+=2){
        sum2 += pow(x, i);
    }
    for (int i = 1; i <= n; i++){
        giaithua = giaithua * i;
        sum3 += pow(x, i) / giaithua;
    }

    cout << sum1 << endl
         << sum2 << endl
         << sum3 << endl;
}