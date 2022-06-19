CC=c++
CCFLAG=-Wall -Wextra -Werror -std=c++98
RM=rm -rf

SRC=megaphone.cpp
OBJ=$(SRC:.cpp=.o)
NAME=megaphone

all : $(NAME)

%.o : %.cpp
	$(CC) $(CCFLAG) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CCFLAG) $(OBJ) -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY :
	all re clean fclean
