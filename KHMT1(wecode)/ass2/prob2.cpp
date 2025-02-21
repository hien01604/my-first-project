#include<iostream>
using namespace std; 

int main(){
    int n;
    cout << "What is the outdoor temperature?";
    do{
    cin >> n;
    } while (n > 40);
    cout << "What is your plan today?" << endl; 
    if (n >= 33)
    {
    cout << "Good day for swimming";
        }
        else if (n < 33 && n >= 24){
            cout << "Good day for golfing";
        }
        else if (n < 24 && n >= 10){
            cout << "Good day to play tennis";
        }
        else{
            cout <<  "Go to bed";
        }
        
    return 0;
}