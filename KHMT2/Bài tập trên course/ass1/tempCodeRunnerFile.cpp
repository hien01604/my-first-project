/*Given a 2-D array size NxN, write a program using Dynamic allocation to do the
following requirements:
• Input the array.
• Compute the average, min, and max values of each 1-D subarray of the array.
• Standardize elements of each 1-D subarray by the following formula:
• new_value = (𝑜𝑙𝑑_𝑣𝑎𝑙𝑢𝑒 − 𝑎𝑣𝑒𝑟𝑎𝑔𝑒) / (max −𝑚𝑖n)
• Round the average values to 2 decimal places using cout << setprecision( )*/

#include <iostream>
#include <iomanip>
using namespace std;

void inputMatrix(double **a, int &m, int &n)
{
    cout << "Input matrix: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> *(*(a + i) + j);
        }
    }
    cout << endl;
}

void findMin(double **a, double *minArray, int m, int n)
{
    cout << "Min value of each row: ";
    for (int i = 0; i < m; i++)
    {
        double minValue = *(*(a + i) + 0);
        for (int j = 0; j < n; j++)
        {
            if (*(*(a + i) + j) < minValue)
                minValue = *(*(a + i) + j);
        }
        *(minArray + i) = minValue;
        cout << minValue << " ";
    }
    cout << endl;
}
void findMax(double **a, double *maxArray, int m, int n)
{
    cout << "Max value of each row: ";
    for (int i = 0; i < m; i++)
    {
        double maxValue = *(*(a + i) + 0);
        for (int j = 0; j < n; j++)
        {
            if (*(*(a + i) + j) > maxValue)
                maxValue = *(*(a + i) + j);
        }
        *(maxArray + i) = maxValue;
        cout << maxValue << " ";
    }
    cout << endl;
}
void average(double **a, double *avrArray, int m, int n)
{
    cout << "Average of each row: ";
    double avr = 0;
    for (int i = 0; i < m; i++)
    {
        double sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += *(*(a + i) + j);
        }
        double avr = sum / n; // Calculate average for each row
        *(avrArray + i) = avr;
        cout << setprecision(2) << avr << " ";
    }
    cout << endl;
}

// new_value = (𝑜𝑙𝑑_𝑣𝑎𝑙𝑢𝑒 − 𝑎𝑣𝑒𝑟𝑎𝑔𝑒) / (max −𝑚𝑖n)
/*void newValue(double **a, double *maxArray, double *minArray, double *avrArray, int m, int n)
{
    cout << "Standardize matrix: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            double newValue = (*(*(a + i) + j) - *(avrArray + i)) / (*(maxArray + i) - *(minArray + i));
            cout << newValue << " ";
        }
    }
}*/
void newValue(double **a, double *maxArray, double *minArray, double *avrArray, int m, int n)
{
    cout << "Standardize matrix: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(a + i) + j) = (*(*(a + i) + j) - *(avrArray + i)) / (*(maxArray + i) - *(minArray + i));
            cout << *(*(a + i) + j) << " ";
        }
        cout << endl;
    }
}
int main()
{
    int m, n;
    cout << "Input size of matrix: ";
    cin >> m >> n;
    double **a;
    a = new double *[m];
    for (int i = 0; i < m; i++)
    {
        a[i] = new double[n];
    }

    double *minArray = new double[m],
           *maxArray = new double[m], *avrArray = new double[m];

    inputMatrix(a, m, n);
    average(a, avrArray, m, n);
    findMin(a, minArray, m, n);
    findMax(a, maxArray, m, n);
    newValue(a, maxArray, minArray, avrArray, m, n);

    for (int i = 0; i < m; i++)
    {
        delete[] a[i];
    }
    delete[] a;
    delete[] minArray;
    delete[] maxArray;
    delete[] avrArray;

    return 0;
}
