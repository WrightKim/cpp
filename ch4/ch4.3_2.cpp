//p190
#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS {

	enum {CLERK, SENIOR, ASSIST, MANAGER};

	void ShowPositionInfo(int pos) {
		switch (pos) {
			case CLERK:
				cout << "Clerk" << endl;
				break;
			case SENIOR:
				cout << "Senior" << endl;
				break;
			case ASSIST:
				cout << "Assist" << endl;
				break;
			case MANAGER:
				cout << "Manager" << endl;
				break;
		}
	}
}


class NameCard {
	private:
		char *name;
		char *company;
		char *phone;
		int position;
	public:
		NameCard (char *_name, char *_company, char *_phone, int position)
			: position(position)
		{
			name = new char[strlen(_name)];
			company = new char[strlen(_company)];
			phone = new char[strlen(_phone)];
			strcpy (name, _name);
			strcpy (company, _company);
			strcpy (phone, _phone);
		}

		void ShowNameCardInfo() {
			cout << "Name: " << this->name << endl;
			cout << "Company: " << this->company << endl;
			cout << "Phone: " << this->phone << endl;
			cout << "position: "; COMP_POS::ShowPositionInfo(position);
			cout << endl;
		}
		
		~NameCard() {
			delete []name;
			delete []company;
			delete []phone;
		}
};

int main (void) {
	NameCard manClerk ("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR ("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist ("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}
