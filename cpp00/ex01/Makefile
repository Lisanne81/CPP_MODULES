NAME		=	phonebook
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -f

SRC			=	PhoneBook.cpp Contact.cpp main.cpp
HDR			=	PhoneBook.hpp Contact.hpp
OBJ			= 	$(SRC:%.cpp=%.o)
LIBS		=	-o

all: start $(NAME) $(HDR)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIBS) $(NAME)

%.o: %.cpp
		@$(CC) $(FLAGS) -c $(LIBS) $@ $<

start:
		@echo "┏━━━━━┓\033[38;5;113mWho you gonna\033[0m"
		@echo "┃ ┏━┓ ┃\033[38;5;208m\tcall...\033[0m ☎️"
		@echo "┃ ┃╋┗━┛ ┏━┓ ╋ ┏━┓"
		@echo "┃ ┃╋┏━┳━┛ ┗━┳━┛ ┗━┓"
		@echo "┃ ┗━┛ ┣━┓ ┏━┻━┓ ┏━┛"
		@echo "┗━━━━━┛ ┗━┛ ╋ ┗━┛"

clean:
		@$(RM) $(OBJ)
		@echo "\033[38;5;140mThank you for ☎️ calling!\033[0m"

fclean: clean
		@$(RM) $(NAME)

re: fclean all