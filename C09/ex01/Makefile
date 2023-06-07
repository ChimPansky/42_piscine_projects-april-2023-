## todo: - check out implicit rules and use for .c -> .o
##		 - header include...

NAME = libft.a

SOURCE_PATH = srcs/
SOURCE_FILES = *.c

COMPILER = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): move_objects
	ar rcs $(NAME) $(SOURCE_PATH)*.o

move_objects: create_objects
	mv *.o $(SOURCE_PATH)

create_objects:
	$(COMPILER) $(CFLAGS) -c $(SOURCE_PATH)$(SOURCE_FILES)

clean:
	find . -name "*.o" -type f -delete

fclean: clean
	rm -f $(NAME)

re: fclean all
