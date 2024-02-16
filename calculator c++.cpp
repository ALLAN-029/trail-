#include <iostream>
using namespace std;
int main()
{
	
	cout<<"---KANYITA CALC.---"<<endl;
	
	cout<<"CHOOSE AN OPERATION TO CARRY OUT."<<endl;
	
	cout<<"1.ADDITION."<<endl;
	cout<<"2.SUBTRACTION."<<endl;
	cout<<"3.MULTIPLICATION."<<endl;
	cout<<"4.DIVISION."<<endl;
	cout<<"5.AVERAGE."<<endl;
	cout<<"6.AREA."<<endl;
	
	int choice;
	switch(choice)
	{
	case 1:
		int numx,numy, sum;
		
		cout<<"enter first no"<<endl;
		cin>>numx;
		cout<<"enter second no"<<endl;
		cin>>numy;
		
		int sum;
		sum=numx +numy;
		
		cout<<"THE SUM IS"<<sum<<endl;
		
		break;
	case 2:
int numx,numy, sub;
	cout<<"enter first no"<<endl;
		cin>>numx;
		cout<<"enter second no"<<endl;
		cin>>numy;
		
		
		int sub;
	sub=numx - numy;
	
	cout<<"THE DIFFERENCE IS"<<sub<<endl;
	
	break;
case 3:
	int numx,numy, mult;
	cout<<"enter first no"<<endl;
		cin>>num x;
		cout<<"enter second no"<<endl;
		cin>>num y;	
	int mult;
mult=numx * numy;

cout<<"THE PRODUCT IS"<<mult<<endl;
	
	break;

case 4:
	double numx,numy, division;
	cout<<"enter first no"<<endl;
		cin>>num x;
		cout<<"enter second no"<<endl;
		cin>>num y;
	double division;
division=numx / numy;

cout<<"THE DIVISION IS"<<division<<endl;	
			
	break;
case 5:
double numx,numy, average;
	cout<<"enter first no"<<endl;
		cin>>num x;
		cout<<"enter second no"<<endl;
		cin>>num y;	

int aver;
aver=(numx +numy)/2;

cout<<"THE AVERAGE IS"<<aver<<endl;

break;

case 6:
	double r,area;
	cout<<"enter the radius"<<endl;
		cin>>r;
		
	
int area;
area=3.142*r*r;


cout<<"THE AREA OF THE CIRCLE IS IS"<<area<<endl;

default:
cout << "Invalid choice" <<endl;
            break;
		
	}
	
	
	//int num x,num y,sum ,sub,mult,division,average;
	//cout<<"Enter the two number"<<endl;
	//cin>>num x>>num y;
	
//int sum;
//sum=num x +num y;
//int sub;
//sub=num x - num y;
//int mult;
//mult=num x * num y;	
//int division;
//div=num x / num y;		
//int aver;
//aver=(num x +num y)	/2;


	
	return 0;
}