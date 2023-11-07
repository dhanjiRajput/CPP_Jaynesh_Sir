#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array Size :";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << " array[" << i << "] :";
        cin >> array[i];
    }

    cout << "Even Numbers :";
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << array[i] <<" ";
        }
    }
}