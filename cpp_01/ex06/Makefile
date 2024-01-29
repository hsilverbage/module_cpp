NAME	= harlFilter

CC		= c++
FLAGS	= -std=c++98 -Wall -Wextra -Werror
RM		= rm -rf

GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
END			=	\e[0m

SRC_DIR = ./sources/
OBJ_DIR = .obj

INCLUDES = -I ./includes

SRC = 	$(SRC_DIR)Harl.cpp	\
		$(SRC_DIR)main.cpp

OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ $(CC) $(FLAGS) $(OBJ) $(INCLUDES) -o $(NAME)
	@printf "$(GREEN)Compilation succeded ! ✔️$(END)\n"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)/sources
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@$(RM) $(OBJ_DIR)
	@printf "$(YELLOW)Objects removed 🗑$(END)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)Executable removed 🗑$(END)\n"

re: fclean all

.PHONY: all clean re

