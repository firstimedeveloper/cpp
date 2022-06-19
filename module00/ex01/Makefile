CC=c++
CCFLAG=-Wall -Wextra -Werror -std=c++98
RM=rm -rf

SRC=PhoneBook.cpp
OBJ=$(SRC:.cpp=.o)
NAME=phonebook

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CCFLAG) $(OBJ) -o $@

%.o : %.cpp
	$(CC) $(CCFLAG) -c $^ -o $@

re : fclean all

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(OBJ)

.phony :
	all re fclean clean
