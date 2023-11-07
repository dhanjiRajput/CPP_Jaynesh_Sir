#include<iostream>
using namespace std;

class A
{
	protected :
		int a;
	public :
		void setdataA()
		{
			cout << "Enter A :";
			cin >> a;
		}
		
		void getdataA()
		{
			cout <<endl<< "A\t: "<<a<<endl;
		}
};

class B : public A
{
	protected :
		int b;
	public :
		void setdataB()
		{
			cout << "Enter B :";
			cin >> b;
		}
		
		void getdataB()
		{
			cout <<endl<< "B\t: "<<b<<endl;
		}
};

class C : public A
{
	protected :
		int c;
	public :
		void setdataC()
		{
			cout << "Enter C :";
			cin >> c;
		}
		
		void getdataC()
		{
			cout <<endl<< "C\t: "<<c<<endl;
		} 	
};

class D : public B, public C
{
	protected :
		int d;
	public :
		void setdataD()
		{
			cout << "Enter D :";
			cin >>d;
		}
		
		void getdataD()
		{
			cout <<endl<< "D\t: "<<d<<endl;
			
			cout <<endl<<B::a<<" + "<<b<<" + "<<c<<" + "<<d<<" = "<<B::a+b+c+d;
		} 	
};

int main()
{
	D d1;
	d1.B::setdataA();
	d1.setdataB();
	d1.setdataC();
	d1.setdataD();
	
	d1.B::getdataA();
	d1.getdataB();
	d1.getdataC();
	d1.getdataD();
}
