#include <iostream>
using namespace std;

int main()
{
    int n1, n2, i, index = 0;

    cout << "Enter First Year :";
    cin >> n1;
    cout << "Enter Last Year  :";
    cin >> n2;

    int size = (n2 - n1) / 4 + 1;
    int array[size];

    for (i = n1; i <= n2; i++)
    {
        if (i % 4 == 0)
        {
            array[index] = i;
            index++;
        }
    }

    for (i = 0; i < index; i++)
    {
        cout << array[i] << "  ";
    }
}