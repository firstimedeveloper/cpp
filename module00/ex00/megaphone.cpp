#include <iostream>

void toUpper(char *str) {
	while (*str) {
		if (*str >= 'a' && *str <= 'z') {
			*str -= 32;
		}
		str++;
	}
}

int	main(int argc, char *argv[]) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else {
		for (int i=1; i<argc; ++i) {
			toUpper(argv[i]);
			std::cout << argv[i];
		}
	}
	std::cout << std::endl;
}
