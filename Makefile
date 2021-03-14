EXEC 		= avg
CFLAGS		= -Wall -Wextra -Werror
CC			= gcc
INC			= -Iinc
SRC_DIR		= src/
SRC_FILES	= $(notdir $(wildcard src/*.c)) 
SRC			= $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ_DIR		= obj/
OBJ_FILES	= $(SRC_FILES:.c=.o)
OBJ			= $(addprefix $(OBJ_DIR), $(OBJ_FILES))
RM			= rm -f

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(EXEC)

re: fclean all

.PHONY: all clean fclean re
