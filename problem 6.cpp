#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	int q;
	int w;
	int e;
	e=0;
	cout<<"Input a number for the program : ";
	cin>>q;
	if (q==0)
	
	cout<<"Thank You!";
	else
		{
		for (w=0;w<=q;w++)
		{e=w+e;}
		cout << "The Sum of All Whole Numbers from 1 to " << q << " is " << e<<".";
		}
	
_getch();
return 0;
}
