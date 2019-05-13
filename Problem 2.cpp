#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	double w,u;
	cout<<"Water Bill \n";
	cout<<"Total Gallons of water is used : ";
	cin>>w;
	cout<<"Unpaid Balance : ";
	cin>>u;
	
	if (u<=0)
		cout<<" Your Total Water Bill is : "<< 35+(w*1.10)<<"php \n";
	
	else if (u>0)
	{
		cout<<" Since you are late for the unpaid balance, 20php will be charged.\n";
		cout<<" Your Toatal Water Bill is : "<<35+(w*1.10)+(20)+(u)<<"php \n";
	}
	_getch();
	return 0;
	
}
