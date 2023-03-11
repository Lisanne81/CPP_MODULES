NAME		=	sed
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -f

SRC			=	
HDR			=	
OBJ			= 	$(SRC:%.cpp=%.o)
LIBS		=	-o

all: start $(NAME) $(HDR)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIBS) $(NAME)

%.o: %.cpp
		@$(CC) $(FLAGS) -c $(LIBS) $@ $<

start:
		@echo "┏━━━━━┓\033[38;5;113mWho is...\033[0m"
		@echo "┃ ┏━┓ ┃\033[38;5;208m\tSed?!\033[0m ☎️"
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