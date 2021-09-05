#include<iostream>
using namespace std;

int main(){
	
	int a, b, c;
	cout << "Enter the numbers: ";
	cin >> a >> b;

	cout << "Before swapping" <<endl;
	cout << "a=" <<a << " b=" <<b << endl;

    c=b; //teporarily storing b in c
    b=a; //value of a in b 
    a=c; //swaping a with b

    cout << "After swapping" <<endl;
	cout << "a=" <<a << " b=" <<b << endl;

	return 0;
}