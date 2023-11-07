#include<iostream>
using namespace std;

class P
{
	protected :
	float cell;
};

class Q : public P
{
	protected:
	float fahren;
	
	public :	
	void setdataq()
	{
		cout <<endl<<"=======================================";
		cout <<endl<< "Enter Temperature in Celcious :";
		cin >> cell;
		cout <<"=======================================";
	}
	
	void getdataq()
	{
		fahren = (cell*9/5)+32;
		cout <<endl<< "The Faherneheit Temperature is :"<<fahren<<endl;
	}
};

class R : public Q
{
	protected :
	float kelvin;
	
	public :	
	void getdatar()
	{
		kelvin = ((fahren - 32)*5/9)+273.15;
		cout <<endl<< "The Kelvin      Temperature is :"<<kelvin<<endl;	
	}
};

int main()
{
	R r1;
	r1.setdataq();
	r1.getdataq();
	r1.getdatar();
}
