#include<iostream>
using namespace std;

class Demo
{
	int a,b;
	public :
		void setdata()
		{
			cout <<"Enter Value of A :";
			cin>> a;
			cout <<"Enter Value of B :";
			cin>> b;
		}
		
		void getdata()
		{
			cout<<endl<<"A : "<<a<<endl;
			cout<<"B : "<<b;
		}
		
		Demo operator+(Demo d2)
		{
			Demo tmp;
			
			tmp.a=a+d2.a;
			tmp.b=b+d2.b;
			
			return tmp;
		}
};

int main()
{
	Demo d1,d2,d3;
	
	d1.setdata();
	d2.setdata();
	
	d3=d1+d2;
	
	d1.getdata();
	d2.getdata();
	d3.getdata();
}