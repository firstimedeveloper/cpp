CC=c++
CCFLAG=-Wall -Werror -Wextra -std=c++98
RM=rm -rf

SRC=Account.cpp tests.cpp
OBJ=$(SRC:.cpp=.o)

NAME=accounts

all : $(NAME)

%.o : %.cpp
	$(CC) $(CCFLAG) -I. -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CCFLAG) -I. $^ -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY :
	all re clean fclean
