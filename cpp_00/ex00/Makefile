NAME	= megaphone

CC		= c++
FLAGS	= -std=c++98 -Wall -Wextra -Werror
RM		= rm -rf

GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
END			=	\e[0m

SRC = megaphone.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ $(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN)Compilation succeded ! ✔️$(END)\n"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@printf "$(YELLOW)Objects removed 🗑$(END)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)Executable removed 🗑$(END)\n"

re: fclean all

.PHONY: all clean re
