#include <iostream>
using namespace std;

/*
 Get five inputs from the user and print the sum
 must print "input i number:"
 */
int main (void){
	
	int input=0, num=0;
	
	for (int i=0; i<5; i++){
		cout<<"input "<<i+1<<" number: ";
		cin>>input;
		num+=input;
	}
	
	cout<<"sum= "<<num<<endl;
	
	return 0;
}
