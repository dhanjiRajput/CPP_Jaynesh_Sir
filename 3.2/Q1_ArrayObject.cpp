#include<iostream>
using namespace std;

class Hotel
{
	int id;
	string name;
	string type;
	string rate;
	string locate;
	int year;
	int staff;
	int room;
	
	public :
		void setdata()
		{
			cout << "Enter Hotel ID                   :";
			cin >> id;
			cout << "Enter Hotel Name                 :";
			cin >> name;
			cout << "Enter Type(like Hotel or Motel)  :";
			cin >> type;
			cout << "Enter Hotel Ratings              :";
			cin >> rate;
			cout << "Enter Hotel Location             :";
			cin >> locate;
			cout << "Enter Established Year           :";
			cin >> year;
			cout << "Enter Staff Quantity             :";
			cin >> staff;
			cout << "Enter Rooms Quantity             :";
			cin >> room;
		}
		
		static void table()
		{
			cout <<endl<<endl<<"====================Number Of Hotels===================="<<endl;
			cout <<"ID Name\t\tTypes Ratings\tLocation Year Staff Rooms"<<endl;
			cout <<"========================================================"<<endl;
		}
		
		void getdata()
		{
			cout <<id<<"  "<<name<<"\t\t"<<type<<" "<<rate<<"\t"<<locate<<"\t  "<<year<<"   "<<staff<<"     "<<room<<endl;
		}
};

int main()
{
	int i,n;
	cout<<"Enter Number Of Hotels :";
	cin >> n;
	
	Hotel h1[n];
	
	for(i=0;i<n;i++)
	{
		h1[i].setdata();
		system("cls");
	}
	
	Hotel::table();
	
	for(i=0;i<n;i++)
	{
		h1[i].getdata();
	}
}
