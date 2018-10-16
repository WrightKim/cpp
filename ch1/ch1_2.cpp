#include <iostream>
using namespace std;

/*
 * Get name and phone number as an input from the user and print it
 */

int main (void) {
	char name[50];
	char phoneNumber[50];

	cout<<"what is your name? ";
	cin>>name;

	cout<<"What is your phone number? (XXX-XXX-XXXX) ";
	cin>>phoneNumber;

	cout<<"your name is "<<name<<" and phone number is "<<phoneNumber<<endl;
	return 0;
}

