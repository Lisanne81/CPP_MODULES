NAME		=	animal
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -f

SRC			=	main.cpp Cat.cpp Dog.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp
HDR			=	include/*.hpp
OBJ			= 	$(SRC:%.cpp=%.o)
LIBS		=	-o

all: start $(NAME) $(HDR)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIBS) $(NAME)

%.o: %.cpp
		@$(CC) $(FLAGS) -c $(LIBS) $@ $<

start:
		@echo "\033[38;5;155m This is a: \033[0m"
		@echo "\033[38;5;172m╭━━━╮╱╱╭━━━┳╮╱╱╭╮╱╭┳━━━╮\033[0m"
		@echo "\033[38;5;173m┃╭━╮┃╱╱┃╭━╮┃┃╱╱┃┃╱┃┃╭━╮┃\033[0m"
		@echo "\033[38;5;174m┃┃╱╰╯╭╮┃╰━╯┃┃╱╱┃┃╱┃┃╰━━╮\033[0m"
		@echo "\033[38;5;175m┃┃╱╭┳╯╰┫╭━━┫┃╱╭┫┃╱┃┣━━╮┃\033[0m"
		@echo "\033[38;5;176m┃╰━╯┣╮╭┫┃╱╱┃╰━╯┃╰━╯┃╰━╯┃\033[0m"
		@echo "\033[38;5;177m╰━━━╯╰╯╰╯╱╱╰━━━┻━━━┻━━━╯\033[0m"
		@echo "\033[38;5;66m\t\tassignment\033[0m 🖥️"

clean:
		@$(RM) $(OBJ)
		@echo "\033[38;5;140mNow you know the truth about 😼 & 🐶!\033[0m"

fclean: clean
		@$(RM) $(NAME)

re: fclean all