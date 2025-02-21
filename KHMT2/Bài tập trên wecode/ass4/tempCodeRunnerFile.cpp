double calculateSum(int n) {
    // Trường hợp cơ sở: n = 1
    if (n == 1) {
        return sqrt(1);
    }
    return sqrt(n) + calculateSum(n - 1);
}