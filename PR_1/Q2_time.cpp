#include<iostream>
using namespace std;

class Time
{
    int seconds;
    int sec;
    int hour;
    int mint;

    public:
    void setdata()
    {
        cout << "Enter Seconds :";
        cin >> seconds;
    }

    void convert(Time t1)
    {
        hour=t1.seconds/3600;
        mint=(t1.seconds%3600)/60;
        sec=(t1.seconds%3600)%60;
    }

    void getdata()
    {
        cout <<endl<< "Perfect Time Formate is :"<<hour<<":"<<mint<<":"<<sec;
    }
};

int main()
{
    Time t1=Time();

    t1.setdata();
    t1.convert(t1);
    t1.getdata();
}