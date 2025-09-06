NAME	:= Serena_my_love!
SRC		:= main.cpp \
			ScavTrap.cpp \
			ex00/ClapTrap.cpp
OBJ		:= $(SRC:.cpp=.o)

CC++	:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC++) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC++) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
