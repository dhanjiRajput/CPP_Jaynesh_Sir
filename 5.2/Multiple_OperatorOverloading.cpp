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
		
		Demo operator*(Demo d2)
		{
			Demo tmp;
			
			tmp.a=a*d2.a;
			tmp.b=b*d2.b;
			
			return tmp;
		}
		
		Demo operator/(Demo d2)
		{
			Demo tmp;
			
			tmp.a=a/d2.a;
			tmp.b=b/d2.b;
			
			return tmp;
		}
		
		Demo operator-(Demo d2)
		{
			Demo tmp;
			
			tmp.a=a-d2.a;
			tmp.b=b-d2.b;
			
			return tmp;
		}
		
		Demo operator%(Demo d2)
		{
			Demo tmp;
			
			tmp.a=a%d2.a;
			tmp.b=b%d2.b;
			
			return tmp;
		}		
		
};

int main()
{
	Demo d1,d2,d3,d4,d5,d6,d7;
	
	d1.setdata();
	d2.setdata();
	
	d3=d1+d2;
	
	d4=d1*d2;
	
	d5=d1/d2;
	
	d6=d1-d2;
	
	d7=d1%d2;
	
	cout<<endl<<"\tEntered Value"<<endl;
	d1.getdata();
	d2.getdata();
	
	cout<<endl<<"\tAddition of Two Object"<<endl;
	d3.getdata();
	
	cout<<endl<<"\tMultiplication of Two Object"<<endl;
	d4.getdata();
	
	cout<<endl<<"\tDivision of Two Object"<<endl;
	d5.getdata();
	
	cout<<endl<<"\tSubtraction of Two Object"<<endl;
	d6.getdata();
	
	cout<<endl<<"\tModulo of Two Object"<<endl;
	d7.getdata();
}