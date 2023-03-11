NAME		= 	megaphone
CC			= 	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -f

SRC			= 	megaphone.cpp
OBJ			= 	$(SRC:%.cpp=%.o)
LIBS		=	-o

all: start $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIBS) $(NAME)

%.o: %.cpp
		@$(CC) $(FLAGS) -c $(LIBS) $@ $<

start:
		@echo "┏━━━━━┓"
		@echo "┃ ┏━┓ ┃ \033[38;5;208mmegaphone\033[0m 📣"
		@echo "┃ ┃╋┗━┛ ┏━┓ ╋ ┏━┓"
		@echo "┃ ┃╋┏━┳━┛ ┗━┳━┛ ┗━┓"
		@echo "┃ ┗━┛ ┣━┓ ┏━┻━┓ ┏━┛"
		@echo "┗━━━━━┛ ┗━┛ ╋ ┗━┛"


clean:
		@$(RM) $(OBJ)
		@echo "\033[38;5;233mALL DONE! BYE\033[0m 📣"

fclean: clean
		@$(RM) $(NAME)

re: fclean all
