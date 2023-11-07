
#include <iostream>
using namespace std;

class Distance
{
    public:
    int feet;
    int inch;

    public:
    void setdata()
    {
        cout << "Enter Feet :";
        cin >> feet;
        cout << "Enter Inch :";
        cin >> inch;
    }

    void convert(Distance d1,Distance d2)
    {
        feet = d1.feet + d2.feet;
        inch = d1.inch + d2.inch;
        feet = feet + (inch / 12);
        inch = inch % 12;
    }

    void getdata()
    {
        cout << endl
             << "Total Distance is " << feet << " Feet and " << inch << " Inch";
    }
};

int main()
{
    Distance d1,d2,d3=Distance();
    
    d1.setdata();
    d2.setdata();
    d3.convert(d1,d2);
    d3.getdata();
    
}