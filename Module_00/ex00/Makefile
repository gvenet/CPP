CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
EXEC_NAME = megaphone
INCLUDES =
LIBS =
OBJ_FILES = megaphone.o

all : $(EXEC_NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

$(EXEC_NAME) : $(OBJ_FILES)
	@$(CC) -o $(EXEC_NAME) $(OBJ_FILES) $(LIBS)

clean :
	@rm $(OBJ_FILES)

fclean : clean
	@rm $(EXEC_NAME)

re : fclean all

.PHONY: all clean fclean re
