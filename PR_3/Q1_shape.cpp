#include<iostream>
using namespace std;

class shape
{
	protected :
		double h,w;
	public :
		shape()
		{
			cout << "Enter Shape of Height :";
			cin >> h;
			cout << "Enter Shape of Width  :";
			cin >> w;
		}
};

class triangle :public shape
{
	public :
		void tarea()
		{
			double a=(h*w)/2;
			cout << "Area of Triangle Shape :"<<a<<endl;
		}	
};

class rectangle :public shape
{
	public :
		void rarea()
		{
			double a=h*w;
			cout << "Area of Rectangle Shape :"<<a<<endl;
		}
};

int main()
{
	triangle t1;
	rectangle r1;
	
	t1.tarea();
	r1.rarea();
}
