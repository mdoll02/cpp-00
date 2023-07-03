NAME := phonebook

CC := c++

CFLAGS := -Wall -Wextra -Werror -std=c++98

SRC := main.cpp Contact.cpp PhoneBook.cpp

SRC_DIR = src
OBJ_DIR = obj

OBJ := $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling $<"


clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re