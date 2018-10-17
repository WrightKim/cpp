//p135
#include <iostream>
using namespace std;

class Calculator {
	private:
		int AddCount, DivCount, MinCount, MulCount;
		
	public:
		void Init() {
			AddCount = 0;
			DivCount = 0;
			MinCount = 0;
			MulCount = 0;
		}
		double Add (double num1, double num2) {
			AddCount++;
			return num1+num2;
		}
		double Div (double num1, double num2) {
			DivCount++;
			return num1 / num2;
		}
		double Min (double num1, double num2) {
			MinCount++;
			return num1 - num2;
		}
		double Mul (double num1, double num2) {
			MulCount++;
			return num1 * num2;
		}
		void ShowOpCount() {
			cout << "Addition: " << AddCount << endl;
			cout << "Subtraction: " << MinCount <<endl;
			cout << "Multiplication: " << MulCount << endl;
			cout << "Division: " << DivCount << endl;
		}
};


int main (void) {
	Calculator cal;
	cal.Init();

	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	
	return 0;
}
