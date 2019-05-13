#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	int x;
	int y;	
	const double z=2.5;
	cout<<"Enter the value for X : "; 
	cin>>x;
	cout<<"Enter the value for Y : "; 
	cin>>y;
	cout<<"    The value of is Z : 2.5 \n";
	cout<<" "<<endl;
	cout<<fixed<<showpoint;
	
	switch (x)
	{	
		case 1:	
	{
			if(1<y&&y<5)
		 		cout<<setw(10)<<setprecision(2)<<"V = "<<y*z; 
			else if (y>=5)
				cout<<setw(10)<<setprecision(2)<<"V = "<< x + y/z;
			break;
	}	
		case 2:
	{
			if (y<=5)
				cout<<setw(10)<<setprecision(2) <<"V = "<<fabs( (x-y)/z);
			else if(y>5)
			{
				cout<<setw(10)<<setprecision(2)<<"V = "<<x-(sqrt(y+z));
			}break;
	}
	  	default:
		cout<<setw(10)<<setprecision(2)<<"V = "<<x+y+z;		
				 	
	}
	_getch();
	return 0;
	
}
