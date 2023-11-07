#include<iostream>
using namespace std;

int main()
{
    string name;
    int i;

    cout << "Enter Any String : ";
    cin >> name;

    for (i = 0; name[i] != 0; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }
        else
        {
            name[i] = name[i] + 32;
        }
       
    }
     cout << name;
}