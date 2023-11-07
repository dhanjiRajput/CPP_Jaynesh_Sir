#include<iostream>
using namespace std;

class Diamond
{
	public :
		Diamond(int id,string name,int quantity,int revenue,int imported,int exported,string ceo)
		{
			cout <<endl<<endl<< "Company ID                   :"<<id<<endl;
			cout << "Company Name                 :"<<name<<endl;
			cout << "Company Staff Quantity       :"<<quantity<<endl;
			cout << "Company Revenue Per Year     :"<<revenue<<endl;
			cout << "Company Imported Raw Diamond :"<<imported<<endl;
			cout << "Company Exported Diamond     :"<<exported<<endl;
			cout << "Copmany CEO Name             :"<<ceo <<endl << endl;	
		}
		

};

int main()
{		
	int n;
	int id;
	string name;
	int quantity;
	int revenue;
	int imported;
	int exported;
	string ceo;
	
	cout << "Enter number of company : ";
	cin >> n;
	
	for(int i=0; i<n; i++)
	{
			cout << "Enter ID                    :";
			cin >> id;
			cout << "Enter Name                  :";
			cin >> name;
			cout << "Enter Staff Quantity        :";
			cin >> quantity;
			cout << "Enter Revenue Per Year      :";
			cin >> revenue;
			cout << "Enter Imported Raw Diamonds :";
			cin >> imported;
			cout << "Enter Exported Diamonds     :";
			cin >> exported;
			cout << "Enter Company CEO Name      :";
			cin >> ceo;
			
			Diamond d1(id,name,quantity,revenue,imported,exported,ceo);
	}
}
