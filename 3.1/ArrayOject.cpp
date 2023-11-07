/* write a Program For Static Keyword */
#include<iostream>
using namespace std;

class Employee
{
	int id;
	string name;
	string post;
	static string company;
	
	public :
		void getdata()
		{
			cout << "Enter Employee ID   :";
			cin >> id;
			cout << "Enter Employee Name :";
			cin >> name;
			cout << "Enter Your Post     :";
			cin >> post;
		}
		void setdata()
		{
			cout << "Employee ID      :"<<id<<endl;
			cout << "Employee Name    :"<<name<<endl;
			cout << "Employee Post    :"<<post<<endl;
			cout << "Employee Company :"<<company<<endl;
		}
};

string Employee :: company="Mauni International School";

int main()
{
	Employee e1,e2=Employee();
	e1.getdata();
	e1.getdata();
	e2.setdata();
	e2.setdata();
}
