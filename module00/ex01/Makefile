CC=c++
CCFLAG=-Wall -Wextra -Werror -std=c++98
RM=rm -rf

SRC=PhoneBook.cpp
OBJ=$(SRC:.cpp=.o)
NAME=phonebook

all : $(NAME)

%.o : %.cpp
	$(CC) $(CCFLAG) -c $^ -o $@

$(NAME) : $(OBJ)
	$(CC) $(CCFLAG) $(OBJ) -o $@

re : fclean all

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(OBJ)

.phony :
	all re fclean clean
