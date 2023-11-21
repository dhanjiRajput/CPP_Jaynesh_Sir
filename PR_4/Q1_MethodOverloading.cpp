#include<iostream>
using namespace std;

class Message
{
	string name;
	public :
		Message()
		{
			cout<<"Enter Your Name :";
			cin>>name;
		}
		
		void print()
		{
			cout<<endl<<"Name : "<<name<<endl;
		}
		
		void print(string name1)
		{
			cout<<endl<<"Full Name :"<<name<<" "<<name1<<endl;
		}
};

int main()
{
	Message m1;
	
	string name1;
	
	cout<<"Enter Your SurName :";
	cin>>name1;
	
	m1.print();
	m1.print(name1);
}
