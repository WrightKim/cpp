#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);
void OpenAccount(void);
void Deposit(void);
void Withdrawal(void);
void Balance(void);

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

typedef struct{
	int accountNumber;
	int balance;
	char customerName[NAME_LEN];
} Account;

Account acc[100];
int accNum = 0;

int main(void){

	int choice;
	
	while(1) {
		ShowMenu();
		cout << "choose one from the menu: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
			case MAKE:
				OpenAccount();
				break;
			case DEPOSIT:
				Deposit();
				break;
			case WITHDRAW:
				Withdrawal();
				break;
			case INQUIRE:
				Balance();
				break;
			case EXIT:
				return 0;
		}
	}//end of while
}//end of main

void ShowMenu(void) {
	cout << "-----Menu-----" << endl;
	cout << "1. Open Account" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdrawal" << endl;
	cout << "4. Balance" << endl;
	cout << "5. Exit" << endl;
}

void OpenAccount(void) {
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[Open Account]" << endl;
	cout << "Acount Number: "; cin >> id;
	cout << "Name: "; cin >> name;
	cout << "Deposit amount: "; cin >> balance;
	cout << endl;

	acc[accNum].accountNumber = id;
	acc[accNum].balance = balance;
	strcpy(acc[accNum].customerName, name);
	accNum++;
}

void Deposit(void) {
	int money;
	int id;
	cout << "[Deposit]" << endl;
	cout << "Account Number: "; cin >> id;
	cout << "Deposit amount: "; cin >> money;

	for (int i=0; i<accNum; i++) {
		if (acc[i].accountNumber == id) {
			acc[i].balance += money;
			cout << "Deposit completed" << endl;
			return;
		}
		cout << "Invalid account number" << endl << endl;
	}
}

void Withdrawal(void) {
	int money;
	int id;
	cout << "[Withdrawal]" << endl;
	cout << "Account number: "; cin >> id;
	cout << "Withdrawal amount: "; cin >> money;

	for (int i=0; i<accNum; i++) {
		if (acc[i].accountNumber == id) {
			if (acc[i].balance < money) {
				cout << "Not enough balance" << endl;
				return;
			}
			acc[i].balance -= money;
			cout << "Withdrawal completed" << endl << endl;
			return;
		}
	}
	cout << "Invalid account number" << endl << endl;
}

void Balance(void) {
	for (int i=0; i<accNum; i++) {
		cout << "Account Number -- " << acc[i].accountNumber << endl;
		cout << "Customer Name -- " << acc[i].customerName << endl;
		cout << "Account Balance -- " << acc[i].balance << endl <<endl;
	}
}

































































