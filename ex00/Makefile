NAME = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

# Déclare les cibles "fausses"
.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@printf "$(CURSIVE)$(GRAY) - Compiling $(NAME)... $(RESET)\n"
	@$(CC) $(FLAGS) megaphone.cpp -o $(NAME)
	@printf "$(GREEN)		- Executable ready. \n$(RESET)"

clean:
	@$(RM) $(NAME)
	@printf "$(YELLOW)		- Executable removed. \n$(RESET)"

fclean: clean
	@printf "$(YELLOW)		- Executable removed. \n$(RESET)"

re: fclean all