#include<iostream>
using namespace std;

class Admin
{
	protected :
		static string comp_name;
		double man_sal;
		double emp_sal;
		int staff;
	private:
		double reven;
		string termi;
		
	public:
		void setdata()
		{
			cout<<"Enter Manager Salary  :";
			cin>>man_sal;
			cout<<"Enter Employee Salary :";
			cin>>emp_sal;
			cout<<"Enter No. of Staff    :";
			cin>>staff;
			cout<<"Enter Total Revenue   :";
			cin>>reven;
			cout<<"Can  Terminae (yes/No):";
			cin>>termi;
		}
		
		void myAccess()
		{
			cout<<"Company Name          :"<<comp_name<<endl;
			cout<<"Manager Salary        :"<<man_sal<<endl;
			cout<<"Total Company Revenue :"<<reven<<endl;
			cout<<"Employee salary       :"<<emp_sal<<endl;
			cout<<"Number of Staff       :"<<staff<<endl;
			cout<<"Terminate             :"<<termi<<endl;
		}
};

string Admin::comp_name="Mauni International School";

class Manager : protected Admin
{
	public:
		void myAccess()
		{
			Admin::setdata();
			Admin::myAccess();
			cout<<"Company Name          :"<<comp_name<<endl;
			cout<<"Manager Salary        :"<<man_sal<<endl;
			cout<<"Employee salary       :"<<emp_sal<<endl;
			cout<<"Number of Staff       :"<<staff<<endl;
			
			man_sal=0;
		}
};

class Employee : Manager
{
	public:
		void myAccess()
		{
			Manager::myAccess();
			cout<<"Company Name          :"<<comp_name<<endl;
			cout<<"Employee salary       :"<<emp_sal<<endl;
			cout<<"Number of Staff       :"<<staff<<endl;
		}
};

int main()
{
	Employee e1;
	
	e1.myAccess();
}
