#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	total = 0;
}

void PhoneBook::addContact(Contact c) {
	int idx;


	idx = total;
	if (idx == 7)
		idx = 0;
	else
		total++;
	contacts[idx] = c;
}

Contact PhoneBook::searchContact(int idx) {
	Contact c = contacts[idx];
	return c;
}

int main() {
	PhoneBook book;

	while (1) {
		std::string command;
		std::cout << "Enter a command: ";
		std::cin >> command;
		if (command == "ADD") {
			Contact c;
			std::cout << "First Name: ";
			std::cin >> c.firstName;
			std::cout << "Last Name: ";
			std::cin >> c.lastName;
			std::cout << "nickname: ";
			std::cin >> c.nickName;
			std::cout << "Phone Number: ";
			std::cin >> c.phoneNumber;
			std::cout << "Darkest Secret: ";
			std::cin >> c.secret;
			book.addContact(c);
		} else if (command == "SEARCH") {
			for (int i=0; i<book.total; ++i) {
				Contact c = book.searchContact(i);
				std::cout << "|";
				std::cout << std::setw(10);
				std::cout << i;
				std::cout << "|";
				std::cout << std::setw(10);
				std::cout << c.firstName;
				std::cout << "|";
				std::cout << std::setw(10);
				std::cout << c.lastName;
				std::cout << "|";
				std::cout << std::setw(10);
				std::cout << c.nickName;
				std::cout << "|";
				std::cout << std::endl;
			}
		} else if (command == "EXIT") {
			break ;
		}
	}
}
