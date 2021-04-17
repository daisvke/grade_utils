EXEC 		= avg
CFLAGS		= -Wall -Wextra -Werror
CC			= gcc
INC			= -Iinc
RM			= rm -rf

SRC_DIR		= src/
SRC_FILES	= $(notdir $(wildcard src/*.c)) 
SRC			= $(addprefix $(SRC_DIR), $(SRC_FILES))

OBJ_DIR		= obj/
OBJ_FILES	= $(SRC_FILES:.c=.o)
OBJ			= $(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $@

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p obj
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(EXEC)

re: fclean all

.PHONY: all clean fclean re
