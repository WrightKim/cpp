#include <iostream>
using namespace std;



int main (void) {

	int totalSales = 0, basePay = 50;
	
	while (totalSales != -1){
		cout << "What is the total sales amount? (-1 to end)";
		cin >> totalSales;
		int commission = 0.12 * totalSales;
		cout << "Compensation this month: " << (basePay + commission);
	}
	
	cout << "Exit program!";

	return 0;
}
