#include<iostream>
using namespace std;

int main(){
    float a, b, c, temp;
    cin >> a >> b >> c;
    if(a>b){
        swap(a, b);
    }
    if(a>c){
        swap(a, c);
    }
    if(b>c){
        swap(b, c);
    }
    cout << a << " " << b << " "<< c;
    return 0;
}