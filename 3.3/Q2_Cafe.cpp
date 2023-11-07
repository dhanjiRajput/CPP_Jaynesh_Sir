#include<iostream>
using namespace std;

class Cafe
{
	int id;
	string name;
	string type;
	string rating;
	string location;
	int year;
	int quantity;
	
	public :
		
		Cafe()
		{
			cout << "Information About Cafe"<<endl;
		}
		
		void setdata()
		{
			cout << "Enter Cafe ID :";
			cin >> id;
			cout << "Enter Cafe Name :";
			cin >> name;
			cout << "Enter Cafe Type(like a rooftop or normal) :";
			cin >> type;
			cout << "Enter Cafe Ratings :";
			cin >> rating;
			cout << "Enter Cafe Loaction(City Name) :";
			cin >> location;
			cout << "Enter Cafe Established Year :";
			cin >> year;
			cout << "Enter Cafe Staff Quantity :";
			cin >> quantity;
		}
		
		void getdata()
		{
			cout <<endl<<endl<< "Cafe ID :"<<id<<endl;
			cout << "Cafe Name :"<<name<<endl;
			cout << "Cafe Type :"<<type<<endl;
			cout << "Cafe Ratings :"<<rating<<endl;
			cout << "Cafe Location :"<<location<<endl;
			cout << "Cafe Established Year :"<<year<<endl;
			cout << "Cafe Staff Quantity :"<<quantity;
		}
};

int main()
{
	int n,i;
	
	cout << "Enter How Much Records You Want :";
	cin >> n;
	
	Cafe c1[n];
	
	for(i=0;i<n;i++)
	{
		c1[i].setdata();
	}
	for(i=0;i<n;i++)
	{
		c1[i].getdata();
	}
}
