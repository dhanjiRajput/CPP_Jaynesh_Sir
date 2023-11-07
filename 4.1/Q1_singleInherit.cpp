#include<iostream>
using namespace std;

class x
{
	protected :
		int a;
		int b;
		int c;	
		int cub;
		int a1;
		int b1;
};

class y : protected x
{
	public :
	void setdata()
	{
		cout << "Enter Value Of A :";
		cin >> a;
		cout << "Enter Value Of B :";
		cin >> b;
	}
	
	void getdata()
	{
		c=a+b;
		cout<<endl<<"======================================="<<endl;
		cout <<"Sum of "<<a<< " + "<<b<<" is : "<<c;
		cube();
	}
	
	void cube()
	{
		cub=c*c*c;	
		cout <<endl<<endl<< "Cube Of Sum :" << cub;
		cube1();
	}
	
	void cube1()
	{
		a1=a*a*a;
		cout <<endl<<endl<< "Individual Value's Cube of A :"<<a1;
		
		b1=b*b*b;
		cout <<endl<<endl<< "Individual Value's Cube of B :"<<b1;
	}
};

int main()
{
	y y1;
	y1.setdata();
	y1.getdata();
}
