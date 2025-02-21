#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char m;
    cin >> m;
    if (n <= 100)
    {
        if (n >= 21)
        {
            if (m == 'M' || m == 'm')
            {
                cout << '1';
            }
            else if (m == 'F' || m == 'f')
            {
                cout << '2';
            }
            else
            {
                cout << "I do not know why";
            }
        }
        if (n < 21)
        {
            if (m == 'M' || m == 'm')
            {
                cout << '3';
            }
            else if (m == 'F' || m == 'f')
            {
                cout << '4';
            }
            else
            {
                cout << "I do not know why";
            }
        }
    }
    else
    {
        cout << "I do not know why";
    }

    return 0;
}