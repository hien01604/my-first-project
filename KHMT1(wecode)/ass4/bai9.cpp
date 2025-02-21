#include <iostream>
using namespace std;

void removeElements(int a[], int &n, int p, int k)
{
    if (p >= 0 && p < n && k <= n - p)
    {
        // Shift elements to the left to overwrite the removed elements
        for (int i = p; i < n - k; ++i)
        {
            a[i] = a[i + k];
        }

        // Update the size of the array after removal
        n -= k;
    }
}

int main()
{
    int n, p, k;
    cin >> n;

    int a[100]; // Assuming a maximum size of 100, adjust as needed
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> p;

    cin >> k;

    removeElements(a, n, p, k);

    // Print the modified array
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }

    return 0;
}
