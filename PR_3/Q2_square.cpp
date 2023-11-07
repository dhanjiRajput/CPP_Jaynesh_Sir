#include<iostream>
using namespace std;

class A
{
	protected :
		double a;
	public :
		void setdata()
		{
			cout << "Enter Any Number :";
			cin >> a;
		}	
};

class C :public A
{
	public :
		void cube()
		{
			cout <<endl<<endl<<"Cube of "<<a<<" Number   :"<< a*a*a <<endl;
		}
};

class S :public A
{
	public :
		void square()
		{
			cout <<endl<<"Square of "<<a<<" Number :"<<a*a <<endl;
		}	
};

int main()
{
	C c1;
	S s1;
	
	c1.setdata();
	s1.setdata();
	
	c1.cube();
	s1.square();
}
