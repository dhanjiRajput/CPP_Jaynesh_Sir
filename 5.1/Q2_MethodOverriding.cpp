#include<iostream>
using namespace std;

class Cricket
{	
	public :
		void getTotalOvers(int over)
		{
			cout << "One Day Match Overs :"<<over;	
		}	
};

class T20Match :public Cricket
{
	public :
		void getTotalOvers(int over)
		{
			cout << "T20 Match Overs :"<<over<<endl;	
		}	
};

class TestMatch :public Cricket
{ 
	public :
		void getTotalOvers(int over)
		{
			cout << "Test Match Overs :"<<over<<endl;	
		}	
};

int main()
{
	Cricket c1;
	T20Match t1;
	TestMatch t11;
	
	t1.getTotalOvers(50);
	t1.getTotalOvers(20);
	t11.getTotalOvers(50);
	t11.getTotalOvers(90);
}
