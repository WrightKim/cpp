#include <iostream>
using namespace std;

int main (void) {
	
	int num = 12;
	int* ptr = &num;
	int **dptr = &ptr;

	int &ref = num;
	int *(&pref) = ptr;
	int **(&dpref) = dptr;

	cout << "num: " << num << endl;
	cout << "num address: " << &num << endl;
	cout << "&ref: " << &ref << endl;
	cout << "ptr: " << ptr << endl;
	cout << "*dptr: " << *dptr << endl;
	cout << "*ptr: " << *ptr << endl;
	cout << "**dptr: " << **dptr << endl;
    cout << "ptr address: " << &ptr << endl;
	cout << "dptr: " << dptr << endl;

	cout << "ref: " << ref <<endl;
	cout << "&pref: " << &pref << endl;
	return 0;
}
