#include <iostream>
using namespace std;

/*
 * function overloading
 */

void swap (int* num1, int* num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void swap (char* ch1, char* ch2){
	char temp = *ch1;
	*ch1 = *ch2;
	*ch2 = temp;
}

void swap (double* db1, double* db2){
	double temp = *db1;
	*db1 = *db2;
	*db2 = temp;
}
	
int main (void) {

	int num1 = 20, num2 = 30;
	swap (&num1, &num2);
	cout << num1 << ' ' << num2 << endl;

	char ch1 = 'A', ch2 = 'Z';
	swap (&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << endl;

	double db1 = 1.111, db2 = 5.555;
	swap (&db1, &db2);
	cout << db1 << ' ' << db2 << endl;

	return 0;
}

