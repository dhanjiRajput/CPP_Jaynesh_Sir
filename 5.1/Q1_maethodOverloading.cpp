#include<iostream>
using namespace std;

class Arithmatic
{
	public :
	void calculate(int a,int b)
	{
		cout << "Division       :"<<a/b<<endl;
	}
	
	void calculate(int a,int b,int c)
	{
		cout << "Subtraction    :"<<a-b-c<<endl;
	}
	
	void calculate(int a,int b, int c,int d)
	{
		cout << "Multiplication :"<<a*b*c*d<<endl;
	}
	
	void calculate(int a,int b,int c,int d,int e)
	{
		cout << "Addition       :"<<a+b+c+d+e<<endl;
	}
	
};

int main()
{
	Arithmatic a1;
	
	a1.calculate(20,10);
	a1.calculate(30,20,10);
	a1.calculate(40,30,20,10);
	a1.calculate(50,40,30,20,10);
}
