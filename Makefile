SRC_PATH = ./srcs/
OBJ_PATH = ./objs/
INC_PATH = ./includes \
		   ./libft/includes/

NAME1 = push_swap
NAME2 = checker

CC = gcc -g
CFLAGS = -Werror -Wextra -Wall

complete = @echo "\033[92mComplete\033[0m"
cleaning = @echo "\033[36mCleaning complete\033[0m"
compiling = @echo "\033[33mCompiling..\033[0m"

SRC_NAME =	swap.c \
			push.c \
			elem.c \
			stack.c \
			reve.c \
			utils.c \
			rota.c

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

INC = $(addprefix -I, $(INC_PATH))
LIB = -L ./libft -lft

.PHONY : all clean fclean re

all: lib $(NAME1) $(NAME2)
	$(complete)

$(NAME1): $(OBJ) $(SRC_PATH)$(NAME1).c 
	@echo "\033[33mBuilding $(NAME1)..\033[0m"
	@echo "Compiling sources into a program.."
	@$(CC) $(CFLAGS) $(OBJ) $(INC) $(SRC_PATH)$(NAME1).c -o $(NAME1) $(LIB)

$(NAME2): $(OBJ) $(SRC_PATH)$(NAME2).c 
	@echo "\033[33mBuilding $(NAME2)..\033[0m"
	@echo "Compiling sources into a program.."
	@$(CC) $(CFLAGS) $(OBJ) $(INC) $(SRC_PATH)$(NAME2).c -o $(NAME2) $(LIB)

lib :
	@echo "\033[33mLaunching Makefile for Libft..\033[0m"
	@make -C ./libft
	@echo "**************************************"
	
$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@echo "Compiling files into binaries.."
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $<	

clean:
	@echo "**************************************"
	@echo "\033[33mCleaning process for Libft engaged..\033[0m"
	@make clean -C ./libft
	@echo "**************************************"
	@echo "\033[33mCleaning process for $(NAME1) & $(NAME2) engaged..\033[0m"
	@rm -f $(OBJ)
	$(cleaning)

fclean: clean
	@echo "\033[33mCleaning programs..\033[0m"
	@rm -f $(NAME1) $(NAME2) 
	@make fclean -C ./libft
	@echo "**************************************"

re: fclean all
