//p135
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Printer {
	private:
		char *p;
	public:
		void SetString(const char *ch);
		void ShowString();
};

void Printer::SetString(const char *ch) {
	strcpy(p, ch);
}
void Printer::ShowString() {
	cout << p << endl;
}


int main (void) {

	Printer pnt;
	pnt.SetString("Hello World!");
	pnt.ShowString();

	pnt.SetString("I love C++!");
	pnt.ShowString();

	return 0;
}
