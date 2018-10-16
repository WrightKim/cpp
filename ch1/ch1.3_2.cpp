#include <iostream>
using namespace std;

int SimpleFunc (int a=10) {
	return a+1;
}

int SimpleFunc (void) {
	return 10;
}

int main (void){
	/*
	 *compiler does not know whether SimpleFunc() should use default value or void
	 */
	cout << SimpleFunc();
	return 0;
}
