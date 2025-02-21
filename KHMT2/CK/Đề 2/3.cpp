#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num, int divisor = 2) {
    // Base cases
    if (num <= 2) return (num == 2);
    if (num % divisor == 0) return false;
    if (divisor * divisor > num) return true;
    // Check next possible divisor
    return isPrime(num, divisor + 1);
}

// Function to compute the sum of all primes <= n using recursion
int sumOfPrimes(int n) {
    // Base case
    if (n < 2) return 0;
    // Check if n is prime and sum up accordingly
    if (isPrime(n)) {
        return n + sumOfPrimes(n - 1);
    } else {
        return sumOfPrimes(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n < 2) {
        cout << "No primes less than or equal to " << n << endl;
        return 0;
    }
    int result = sumOfPrimes(n);
    cout << "Sum of all primes less than or equal to " << n << " is: " << result << endl;
    return 0;
}