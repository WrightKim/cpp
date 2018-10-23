//p226
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
		NameCard (char *_name, char *_company, char *_phone, int position): position(position)
		{
			this->name = new char[strlen(_name)+1]; //add 1 for string terminator \0
			this->company = new char[strlen(_company)+1];
			this->phone = new char[strlen(_phone)+1];
			strcpy (name, _name);
			strcpy (company, _company);
			strcpy (phone, _phone);
		}

		//deep copy constructor
		NameCard (const NameCard &copy):position(copy.position) {
			this->name = new char[strlen(copy.name)+1]; //add 1 for string terminator \0
			this->company = new char[strlen(copy.company)+1];
			this->phone = new char[strlen(copy.phone)+1];
			strcpy (name, copy.name);
			strcpy (company, copy.company);
			strcpy (phone, copy.phone);
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
			cout << "object deleted!" <<endl;
		}
};

int main (void) {
	NameCard manClerk ("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard copy1 = manClerk;
	NameCard manSENIOR ("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2 = manSENIOR;
//	NameCard manAssist ("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();
	return 0;
}
