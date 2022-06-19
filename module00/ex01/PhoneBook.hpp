#include <string>

class Contact {
public:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string secret;
	int phoneNumber;
};

class PhoneBook {
public:
	int total;

	PhoneBook();

	void addContact(Contact c);
	Contact searchContact(int idx);


private:
	Contact contacts[8];
};
