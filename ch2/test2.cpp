#include <iostream>
using namespace std;

void Swap(int &num1, int &num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main (void) {
	int num1 = 5, num2 = 10;

	Swap(num1, num2);
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
}
