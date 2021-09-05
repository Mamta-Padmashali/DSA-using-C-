#include<iostream>
using namespace std;

int main()
{
	float a,b,c,largest;
	cout<<"Enter three numbers: ";
	cin>>a>>b>>c;
	largest = ((a>b && a>c) ? a : (b>c) ? b : c);
  cout<<"Largest among the three numbers is "<<largest;

	return 0;
}