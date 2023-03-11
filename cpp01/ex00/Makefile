NAME		=	zombie
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -f

SRC			=	Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
HDR			=	Zombie.hpp
OBJ			= 	$(SRC:%.cpp=%.o)
LIBS		=	-o

all: start $(NAME) $(HDR)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIBS) $(NAME)

%.o: %.cpp
		@$(CC) $(FLAGS) -c $(LIBS) $@ $<

start:
		printf "\033c"
		@echo "┏━━━━━┓\033[38;5;113mWho's \033[0m"
		@echo "┃ ┏━┓ ┃\033[38;5;208m\tBraiiiiinnnnzzZZZ\033[0m 🧠"
		@echo "┃ ┃╋┗━┛ ┏━┓ ╋ ┏━┓"
		@echo "┃ ┃╋┏━┳━┛ ┗━┳━┛ ┗━┓"
		@echo "┃ ┗━┛ ┣━┓ ┏━┻━┓ ┏━┛"
		@echo "┗━━━━━┛ ┗━┛ ╋ ┗━┛"

clean:
		@$(RM) $(OBJ)
		printf "\033c"
		@echo "\033[38;5;140mThank you for using your 🧠 BraiiiiinnnnzzZZZ!\033[0m"

fclean: clean
		@$(RM) $(NAME)

re: fclean all