#include<iostream>
using namespace std;

class RBI
{
	protected :
		float Rrate=4;
	public :
};

class SBI : public RBI
{
	protected :

		float Srate=3.5;
		int invet=100000;
	public :
		void getROIs()
		{
			cout <<endl<< "SBI Rate Of Interest is :"<<Rrate/invet*100<<" %"<<endl;
		}	
};

class BOB : public RBI
{
	protected :
		float Brate=4.5;
	public :
		void getROIb()
		{
			cout <<endl<< "BOB Rate Of Interest is :"<<Rrate+Brate<<" %"<<endl;
		}
};

class ICICI : public RBI
{
	protected :
		float Irate=5;
	public :
		void getROIi()
		{
			cout <<endl<< "BOB Rate Of Interest is :"<<Rrate+Irate<<" %"<<endl;
		}
};

int main()
{
	SBI s1;
	BOB b1;
	ICICI i1;
	s1.getROIs();
	b1.getROIb();
	i1.getROIi();
}
