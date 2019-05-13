#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	char p;
	int t;
	cout<<"The Three Packages are :\n";
	cout<< "Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr.\n";
	cout<< "Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr.\n";
	cout<< "Package C: For P1995/mo of unlimited access is provided.\n";
	cout<" \n";
	cout<< "Choose A , B or C\n";
	cout<" \n";
	cout<< "Please Enter the package that you had availed: ";
	cin>>p;
	switch(p)
		{
		case 'a':
		case 'A':
			cout<< "How many hour/s you have used : ";
			cin>> t;
			cout<<"The Package A.\n";
			if (t<=10)
				cout<<"Your total amount due is : 995php \n";
			if(t>10)
				cout<<"Your total amount due is : "<<( (t-10)*20) +995<<endl;
			break;
		case 'b':
		case 'B':
			cout<< "How many hour/s you have used : ";
			cin>> t;
			cout<<"The Package B.\n";
			if (t<=20)
				cout<<"Your total amount due is : 1495php \n";
			if(t>20)
				cout<<"Your total amount due is : "<<( (t-20)*10) +1495<<endl;
			break;
		case 'c':
		case 'C':
			cout<<"The Package C.\n";
			cout<<"You have Unlimited Access!\n";
			cout<<"Your total amount due is : 1995php \n";
			break;
			default :
				cout<<"INVALID PACKAGE!";
	}
	 _getch();
	 return 0;
}
