#include<iostream>
using namespace std;

//Abstract Class
class Arithmatic
{
	protected :
		float r;
		
		
	public :
		void getCredential()
		{
			cin>>r;	
		}
		
	virtual float calculate()=0;
};

class Circle : public Arithmatic
{
	public :
		float calculate()
		{
			return 3.14*r*r;
		}
		
		void Circle_setadata()
		{
			
		}
};

class Triangle : public Arithmatic
{
	public :
		float calculate()
		{
			return (r*r)/2;
		}	
};

class Rectangle : public Arithmatic
{
	public :
		float calculate()
		{
			return r*r;
		}	
};

int main()
{
	Circle c1;
	Triangle t1;
	Rectangle r1;
	
	cout<<"Enter The Radius of Circle :";
	c1.getCredential();
	
	cout<<"Enter The A side of Triangle :";
	t1.getCredential();
	
	cout<<"Enter The side of Retangle :";
	r1.getCredential();
	
	cout<<endl<<"Area of Circle    :"<<c1.calculate()<<endl;
	cout<<"Area of Triangle  :"<<t1.calculate()<<endl;
	cout<<"Area of Rectangle :"<<r1.calculate()<<endl;
}
