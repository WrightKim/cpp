#include <iostream>
using namespace std;

void Increment (int &num) {
	num += 1;
}

void Change(int &num) {
	num = num * -1;
}


int main (void) {
	int num = 1;

	Increment(num);
	cout << num << endl;
	Change(num);
	cout << num << endl;

	return 0;
}
