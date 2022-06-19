#include <string>

class Contact {
public:
	string firstName;
	string lastName;
	string nickName;
	string secret;
	int phoneNumber;

}

class PhoneBook {
public:
	void addContact(Contact &c);
	void searchContact(Contact &c);


private:
	Contact contacts[8];
	int total;
};
