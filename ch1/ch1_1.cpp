#include <iostream>
using namespace std;

/*
 Get five inputs from the user and print the sum
 must print "input i number:"
 */
int main (void){
	/*
	int a, b, c, d, e;
	cout<<"type first number: "<<endl;
	cin>>a;
	cout<<"type second number: "<<endl;
	cin>>b;
	cout<<"type third number: "<<endl;
	cin>>c;
	cout<<"type fourth number: "<<endl;
	cin>>d;
	cout<<"type fifth number: "<<endl;
	cin>>e;

	int sum = a+b+c+d+e;
	cout<<"sum = "<<sum<<endl;
*/
	int input=0, num=0;
	for (int i=0; i<5; i++){
		cout<<"input "<<i+1<<" number: ";
		cin>>input;
		num+=input;
	}
	cout<<"sum= "<<num<<endl;
	return 0;
}
