
#include <fstream>
#include <iostream>
#include <limits>
#include <string.h>
#include <unistd.h>
using namespace std;

class atm {
private:
	char username[30];
	int password;
	int balance;

public:
	char* usernames(void)
	{
		return username;
	}

	int passwords(void)
	{
		return password;
	}

	void getData(void)
	{
		cin.ignore(
			numeric_limits<streamsize>::max(),
			'\n');
		cout << "\nEnter username:";

		cin.getline(username, 30);
		cout << "\nEnter 4-digit "
			<< "password:";

		cin >> password;
		cin.ignore(
			numeric_limits<streamsize>::max(),
			'\n');
		cout << "\nEnter initial"
			<< " balance:";

		cin >> balance;
		cin.ignore(
			numeric_limits<streamsize>::max(),
			'\n');
	}

	void showData(void)
	{
		cout << "Username:" << username
			<< ", Password:" << password
			<< ", Balance:" << balance
			<< endl;
	}

	int adduser();
	int viewallusers();
	int deleteuser(char*);
	void updateuserasdeposit(char*);
	void updateuseraswithdraw(char*);
	int searchspecificuser(char*, int);
	int searchallusertodisplay(char*);
};


void atmUser()
{
	atm a;

	char uname[30];
	int pass, ch, ch1, ch2, found = 0;

mainmenu:

	cout << "\nWelcome to GeeksforGeeks ATM";
	cout << "\nLogin as :\n1. Admin\n2."
		<< " User\n3. "
			"Exit\nChoose one : ";
	cin >> ch;

	switch (ch) {
	case 1:
	rerun:
		cout
		 << "\nEnter details to"
			<< " login as Admin\n";
		cout << "\nEnter password:";
		cin >> pass;
		if (pass == 1234) {
		admin:
			cout << "\nWelcome to"
				<< " Admin Menu";
			cout << "\n1. Add User\n2."
				<< " Delete User\n3. "
					"View All User\n4. "
				<< "Exit";
			cout << "\nSelect one : ";
			cin >> ch1;
			switch (ch1) {
			case 1:
				a.adduser();
				goto admin;

			case 2:
				cout << "\nEnter the "
					<< "Username to be "
						"deleted : ";
				cin.ignore(
					numeric_limits<streamsize>::max(),
					'\n');
				cin.getline(uname, 30);
				a.deleteuser(uname);
				goto admin;

			case 3:
				a.viewallusers();
				goto admin;

			case 4:
				break;
			}
		}
		else {
			cout << "\nDetails are "
				<< "incorrect ! Please"
					" try again";
			cin.get();
			goto rerun;
		}
		goto mainmenu;

	case 2:
		cout << "\n Enter details to"
			<< " login as User\n";

		cin.ignore(
			numeric_limits<streamsize>::max(),
			'\n');
		cout << "Enter username:";
		cin.getline(uname, 30);
		cout << "\nEnter password:";

		cin >> pass;
		found = a.searchspecificuser(
			uname, pass);

		if (found) {
		user:
			cout << "\nWelcome "
				<< uname;
			cout << "\nWelcome to"
				<< " User Menu";
			cout << "\n1. Deposit\n2."
				<< " Withdraw\n3. View "
					"Account\n4. "
				<< "Exit\nEnter your choice:";
			cin >> ch2;

			switch (ch2) {
			case 1:
				a.updateuserasdeposit(uname);
				goto user;
			case 2:
				a.updateuseraswithdraw(uname);
				goto user;
			case 3:
				a.searchallusertodisplay(uname);
				goto user;
			case 4:
				cout << "Thank you";
				break;
			}
		}
		else {
			cout << "\nNo account found"
				<< " with username "
					":(\n\nHit ENTER to continue "
				<< uname;
			cin.get();
		}
		goto mainmenu;

	case 3:
		cout << "\nThankyou for "
			<< "banking with "
			<< "GeeksforGeeks";
		cin.get();
		break;
	}
}

int atm::adduser()
{
	atm a;

	ofstream file;

	file.open("aaa.txt",
			ios::out | ios::app);
	if (!file) {
		cout << "Error in creating "
			<< "file.." << endl;
		return 0;
	}

	a.getData();

	file.write((char*)&a, sizeof(a));

	file.close();

	return 0;
}

int atm::viewallusers()
{

	atm a;

	ifstream file1;

	file1.open("aaa.txt", ios::in);
	if (!file1) {
		cout << "Error in opening file..";
		return 0;
	}

	file1.read((char*)&a, sizeof(a));
	while (!file1.eof()) {

		a.showData();
		file1.read((char*)&a, sizeof(a));
	}

	file1.close();
	return 0;
}

int atm::deleteuser(char* uname)
{

	atm a;

	fstream original, temp;
	original.open("aaa.txt", ios::in);
	if (!original) {
		cout << "\nfile not found";
		return 0;
	}
	else {
		temp.open("temp.txt",
				ios::out | ios::app);
		original.read((char*)&a, sizeof(a));

		while (!original.eof()) {

			if (!strcmp(a.usernames(),
						uname)) {
				cout << "data found "
					<< "and deleted\n"
					<< a.username
					<< "\n";
			}
			else {
				temp.write((char*)&a,
						sizeof(a));
			}

			original.read((char*)&a,
						sizeof(a));
		}

		original.close();
		temp.close();
		remove("aaa.txt");
		rename("temp.txt", "aaa.txt");
		a.viewallusers();
	}
	return 0;
}

// Function to update user by
// depositing money
void atm::updateuserasdeposit(char* uname)
{

	atm a;
	fstream file, temp;
	file.open("aaa.txt",
			ios::in | ios::out | ios::ate);
	temp.open("temp.txt",
			ios::out | ios::app);
	file.seekg(0);
	file.read((char*)&a, sizeof(a));

	// Till end of the file
	while (!file.eof()) {
		if (!strcmp(a.usernames(), uname)) {
			int b;

			cout << "\nEnter amount "
				<< "to deposit:";
			cin >> b;
			a.balance = a.balance + b;
			cout << "\nBalance is:"
				<< a.balance;
			temp.write((char*)&a, sizeof(a));
		}
		else {
			temp.write((char*)&a, sizeof(a));
		}
		file.read((char*)&a, sizeof(a));
	}
	file.close();
	temp.close();
	remove("aaa.txt");
	rename("temp.txt", "aaa.txt");
}

// Function to update user by
// depositing withdrawing money
void atm::updateuseraswithdraw(char* uname)
{

	atm a;
	fstream file, temp;
	file.open("aaa.txt",
			ios::in | ios::out | ios::ate);
	temp.open("temp.txt",
			ios::out | ios::app);
	file.seekg(0);
	file.read((char*)&a, sizeof(a));

	// Till end of file is reached
	while (!file.eof()) {
		if (!strcmp(a.usernames(), uname)) {
			int b;
			cout << "\nEnter amount "
				<< "to withdraw:";
			cin >> b;
			if (a.balance < b) {
				cout
					<< "\nInsufficient "
					<< "balance to withdraw";
			}
			else {
				a.balance = a.balance - b;
				temp.write((char*)&a,
						sizeof(a));
				cout << "\nBalance is:"
					<< a.balance;
			}
		}
		else {
			temp.write((char*)&a,
					sizeof(a));
		}
		file.read((char*)&a, sizeof(a));
	}

	// Close the file
	file.close();
	temp.close();
	remove("aaa.txt");
	rename("temp.txt", "aaa.txt");
}

// Search user
int atm::searchspecificuser(
	char* uname, int pass)
{
	atm a;
	fstream f;

	f.open("aaa.txt", ios::in);
	if (!f) {
		cout << "Error in opening file..";
		return 0;
	}

	f.read((char*)&a, sizeof(a));
	while (!f.eof()) {

		if (!strcmp(a.usernames(), uname)) {
			if (a.passwords() == pass) {
				return 1;
			}
		}
		f.read((char*)&a, sizeof(a));
	}

	// Close the file
	f.close();
	return 0;
}

// Search specific user
int atm::searchallusertodisplay(
	char* uname)
{
	atm a;
	fstream file1;

	// Open the file
	file1.open("aaa.txt", ios::in);
	if (!file1) {
		cout << "Error in opening file..";
		return 0;
	}

	// Read data from file
	file1.read((char*)&a, sizeof(a));
	while (!file1.eof()) {
		if (!strcmp(a.usernames(), uname)) {
			a.showData();
			return 0;
		}
		file1.read((char*)&a, sizeof(a));
	}

	// Close the file
	file1.close();
	return 0;
}

// Driver Code
int main()
{
	// Function Call
	atmUser();

	return 0;
}
