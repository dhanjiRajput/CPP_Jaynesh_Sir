#include<iostream>
#include<string.h>
using namespace std;

class Billing
{
	int no;
	string name;
	int quant;
	int price;
	int disc;
	int disc1;
	int total;
	public :
	int gtotal;
	
	public :
		void setdata()
		{
			cout <<endl<<endl<< "Enter Item Number :";
			cin >> no;
			cout << "Enter Item Name   :";
			cin >> name;
			cout << "Enter Item Price  :";
			cin >> price;
			cout << "Enter Quantity    :";
			cin >> quant;
			cout << "Enter Discount    :";
			cin >> disc; 
		}
		
		void table()
		{
			cout <<endl<<endl<< "================================Bill================================"<<endl;
			cout << "Number\tName\tQuantity\tPrice\tDiscount\tTotal"<<endl;
		}
		void getdata()
		{
			total=price*quant;
			disc1=(total*disc)/100;
			gtotal=total-disc1;
			cout <<no<<"\t"<<name<<"\t"<<quant<<"\t\t"<<price<<"\t"<<disc1<<"\t\t"<<gtotal<<endl;
		}
		
	
		
		int searchData(int n)
		{
			if(n==no)
			{
				cout << "Number\tName\tQuantity\tPrice\tDiscount\tTotal"<<endl;
				cout <<no<<"\t"<<name<<"\t"<<quant<<"\t\t"<<price<<"\t"<<disc1<<"\t\t"<<gtotal<<endl;
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
	int n,i,n1,check,cmp=0,ftotal=0;
	string name="kidechadhanji@gmail.com";
	string pass="kidechadhanji";
	
	string name1;
	string pass1;
	
	cout <<endl<<endl<< "Enter Number of Records :";
	cin >> n;
	cout <<"=========================================================="<<endl<<endl;
	
	Billing b1[n],b2;
	
	for(i=0;i<n;i++)
	{
		b1[i].setdata();
	}
	
	cout <<"=========================================================="<<endl;
	cout <<"To See All Records Please Login"<<endl;
	cout <<endl<< "\tEnter User Name :";
	cin >> name1;
	cout << "\tEnter PassWord  :";
	cin >> pass1;
	
	

	if(name==name1 && pass==pass1)
	{
		b2.table();

		for(i=0;i<n;i++)
		{
			b1[i].getdata();
			
			ftotal=ftotal+b1[i].gtotal;
		}
		cout <<"===================================================================="<<endl;
		cout <<"\tGrand Total\t\t\t\t\t"<<ftotal;
		cout <<endl<<"===================================================================="<<endl;
		cout <<endl<<endl<<"Enter Item Number :";
		cin >> n1;
		
		
		int cnt = 0;
		for(i=0; i<n; i++)
		{
			check = b1[i].searchData(n1);
			
			if(check) 
			{
				cnt ++;
			}
		}
		
		if(cnt==0)
		{
			cout <<"No Data Available !!! ";
		}  
	}
	else
	{
		cout << "User Login Failed, We Can Not Show Your Records Plz Try Again......!";
	}	
}
