#include<iostream>
using namespace std;

class Distance
{
	int km;
	int meter;
	public:
    		void setdata()
    		{
        		cout << "Enter Kilometer :";
        		cin >> km;
        		cout << "Enter Meter     :";
        		cin >> meter;
    		}	
	    	
	    	Distance operator+(Distance d2)
	    	{
		       Distance tmp;
		       
		       tmp.km    = km + d2.km ;
        		tmp.meter = meter + d2.meter;
			tmp.km    = tmp.km + (tmp.meter / 1000);
        		tmp.meter = tmp.meter % 1000;
			
			return tmp;	
		}
		
		void getdata()
	    	{
	        	cout << endl << "Total Distance is " << km << " Kilometer and " << meter << " Meter";
	    	}
};

int main()
{
	Distance d1,d2,d3;
	
	d1.setdata();
	d2.setdata();
	
	d3=d1+d2;
	
	d3.getdata();
}
