/*Bạn đang đứng trước một cái giếng ma thuật, trên đó có ghi 2 số nguyên dương a và b. 
Mỗi lần ném một viên sỏi xuống giếng, nó sẽ trả về cho bạn a*b đồng tiền vàng, sau đó a và b sẽ tăng lên 1. 
Vậy nếu bạn có n viên sỏi thì sẽ kiếm được bao nhiêu đồng tiền vàng?*/

#include<iostream>
using namespace std;

int main(){
    int a, b, n;
    int sum = 0;

    cin >> a >> b >> n;

    for (int i = 1; i <= n; i ++){
        sum += a * b;
        a++;
        b++;
    }

    cout << sum;
}