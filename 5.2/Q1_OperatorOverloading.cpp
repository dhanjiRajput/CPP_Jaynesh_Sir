#include<iostream>
using namespace std;

class High
{
	int a;
	public :
		void setdata()
		{
			cout<<"Enter Any Number :";
			cin>>a;
		}
		
		void getdata()
		{
			cout<<"Numbers :"<<a;
		}
		
		bool operator>(High h2)
		{
			return a>h2.a;
		}
};

int main()
{
	High h1,h2;
	cout<<endl<<"\t\tEnter Value :"<<endl<<endl;
	h1.setdata();
	h2.setdata();
	
	cout<<endl<<"\tDisplay Entered Value"<<endl<<endl;
	h1.getdata();
	cout<<endl;
	h2.getdata();
	
	cout<<endl<<"\tComparison Of Higher Value"<<endl<<endl;
	
	if(h1>h2)
	{
		cout<<endl<<"Object H1 is Maximum";
	}
	else
	{
		cout<<endl<<"Object H2 is Maximum";
	}
	
}