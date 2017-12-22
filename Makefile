SRC_PATH = ./srcs/
OBJ_PATH = ./objs/
INC_PATH = ./includes/ \
		   ./libft/includes/

NAME1 = push_swap
NAME2 = checker

CC = gcc -g
CFLAGS = -Werror -Wextra -Wall

complete = @echo "\033[92mComplete\033[0m"
cleaning = @echo "\033[36mCleaning complete\033[0m"

SRC_NAME1 = main.c \
			swap.c \
			push.c \
			elem.c \
			stack.c \
			reve.c \
			rota.c

SRC_NAME2 =

OBJ_NAME1 = $(SRC_NAME1:.c=.o)
OBJ_NAME2 = $(SRC_NAME2:.c=.o)

SRC1 = $(addprefix $(SRC_PATH)$(NAME1)/, $(SRC_NAME1))
OBJ1 = $(addprefix $(OBJ_PATH)$(NAME1)/, $(OBJ_NAME1))

SRC2 = $(addprefix $(SRC_PATH)$(NAME2)/, $(SRC_NAME2))
OBJ2 = $(addprefix $(OBJ_PATH)$(NAME2)/, $(OBJ_NAME2))

INC1 = $(addprefix -I, $(INC_PATH))
INC2 = $(addprefix -I, $(INC_PATH))
LIB = -L ./libft -lft -lmlx 

.PHONY : all clean fclean re

all: $(NAME1) $(NAME2)
	$(complete)

$(NAME1): $(OBJ1) lib
	@echo "\033[33mBuilding $(NAME1)..\033[0m"
	@echo "Compiling sources into a program.."
	@$(CC) $(CFLAGS) $(OBJ1) $(INC1) -o $(NAME1) $(LIB)

$(NAME2): $(OBJ2) lib
	@echo "\033[33mBuilding $(NAME2)..\033[0m"
	@echo "Compiling sources into a program.."
	@$(CC) $(CFLAGS) $(OBJ2) $(INC2) -o $(NAME2) $(LIB)

lib :
	@echo "\033[33mLaunching Makefile for Libft..\033[0m"
	@make -C ./libft
	@echo "**************************************"
	
$(OBJ_PATH)/$(NAME1)%.o: $(SRC_PATH)/$(NAME1)%.c
	@echo "Compiling files into binaries.."
	@$(CC) $(CFLAGS) $(INC1) -o $@ -c $<
	
$(OBJ_PATH)/$(NAME1)%.o: $(SRC_PATH)/$(NAME1)%.c
	@echo "Compiling files into binaries.."
	@$(CC) $(CFLAGS) $(INC1) -o $@ -c $<

clean:
	@echo "**************************************"
	@echo "\033[33mCleaning process for Libft engaged..\033[0m"
	@make clean -C ./libft
	$(cleaning)
	@echo "**************************************"
	@echo "\033[33mCleaning process for $(NAME1) & $(NAME2) engaged..\033[0m"
	@echo "Removing fdf binaries.."
	@rm -f $(OBJ1) $(OBJ2)
	$(cleaning)

fclean: clean
	@echo "\033[33mCleaning library and program..\033[0m"
	@echo "Removing program named $(NAME1), $(NAME2) .."
	@rm -f $(NAME1) $(NAME2) 
	@make fclean -C ./libft
	$(cleaning)
	@echo "**************************************"

debug: all
	lldb ./fdf ./maps/basictest.fdf

sanitize: $(OBJ)
	@echo "\033[33mLaunching Makefile for Libft..\033[0m"
	@make -C ./libft
	@echo "**************************************"
	@echo "\033[33mBuilding fdf..\033[0m"
	@echo "Compiling sources into a program.."
	@$(CC) $(CFLAGS) -fsanitize=address $(LIB) $(OBJ) $(INC) -framework OpenGL -framework AppKit -o $(NAME)
	./fdf ./maps/elem.fdf

re: fclean all
