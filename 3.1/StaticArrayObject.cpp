#include<iostream>
using namespace std;

class Student
{
	int rno;
	string name;
	int st;
	static string school;
	
	public :
		void setdata()
		{
			cout << "Enter Roll No :";
			cin >> rno;
			cout << "Enter Name    :";
			cin >> name;
			cout << "Enter Standard:";
			cin >> st;
		}
		
		static void table()
		{
			cout << "========Student Data========"<<endl;
			cout << "R.No. Name\t\tStandard School"<<endl;
		}
		
		void getdata()
		{
			cout <<rno<<"\t"<<name<<"\t\t"<<st<<"\t"<<school<<endl;
		}
};

string Student :: school="Mauni International School";

int main()
{
	int i,n;
	cout << "Enter How Much Record you want :"<<endl;
	cin >> n;
	
	Student s1[n];
	
	for(i=0;i<n;i++)
	{
		s1[i].setdata();
	}
	
	Student::table();
	
	for(i=0;i<n;i++)
	{
		s1[i].getdata();
	}
}
