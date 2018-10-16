#include <iostream>
using namespace std;

/*
 * Get input from user, and print multiplication table
 */

int main (void) {
	
	int input;
	cout << "type any number: ";
	cin >> input;

	for (int i=1; i<10; i++){
		cout << input <<" X "<< i <<" is "<< i*input << endl;
	}	
	return 0;
}
