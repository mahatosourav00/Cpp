#include<iostream>

using namespace std;

int min(int a,int b)
{
	return (a<b)?a:b;
}

int min(int &a,int &b,int &sum)
{
	sum=(a<b)?a:b;
}

int main()
{
	int x,y,s;
	
	cout<<endl<<"Enter two numbers to find minimum:";
	cin>>x>>y;

	cout<<"\n\n\n---------------*  Output of function call by value *-------------\n\n";
	cout<<min(x,y);

	cout<<"\n\n\n-------------------* Output of function call by Reference *--------------------\n\n";
	min(x,y,s);

	cout<<s;

	cout<<endl;

		
}

	
