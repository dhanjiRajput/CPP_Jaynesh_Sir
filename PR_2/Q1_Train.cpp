#include<iostream>
using namespace std;

class Train
{
	private :
	int number;
	string name;
	string source;
	string desti;
	string time;
	
	public :
		void setdata()
		{
			cout <<"Enter Train Number :";
			cin >> number;
			cout <<"Enter Train Name   :";
			cin >>name;
			cout <<"Enter Train Source :";
			cin >> source;
			cout <<"Enter Train Destination :";
			cin >> desti;
			cout <<"Enter Train Time :";
			cin >> time;
		}	
		
		void table()
		{
			cout <<"================Train Records================="<<endl;
			cout <<"Number\tName\tSource\tDestination\tTimings"<<endl;
		}
		void getdata()
		{
			cout <<number<<"\t"<<name<<"\t"<<source<<"\t"<<desti<<"\t\t"<<time<<endl;
		}
		
		int searchData(int n)
		{
			if(n==number)
			{
				cout <<"Number\tName\tSource\tDestination\tTimings"<<endl;
				cout <<number<<"\t"<<name<<"\t"<<source<<"\t"<<desti<<"\t\t"<<time<<endl;
				return 1;
			}
			else 
			{
				return 0;
			}
		}
		
};

int main()
{
	int n,i,n1,count,check;
	
	cout <<"======================================"<<endl;
	cout << "Enter Train Records :";
	cin >> n;
	cout <<"======================================"<<endl;
	
	Train t1[n],t2;
	
	for(i=0;i<n;i++)	
	{
		t1[i].setdata();
	}
	
	t2.table();
	
	for(i=0;i<n;i++)
	{
		t1[i].getdata();
	}
	
	cout <<endl<<endl<<"Enter Train Number :";
	cin >> n1;
	
	for(i=0; i<n; i++)
	{
		check = t1[i].searchData(n1);
	}
	
	if(check==0)  cout << "No Data Available !!! ";
}
