CXX = clang++
CXXFLAGS = -c -Wall -I/usr/include/gtest/
LXXFLAGS = -pthread
GTEST = /usr/lib/x86_64-linux-gnu/libgtest.a

TEST_SRC = ./tests.cpp
TEST_OBJ = $(TEST_SRC:.cpp=.o)
TEST = test_all

CC = clang
CFLAGS = -c -Wall -Werror -Wextra
LFLAGS =

EX00_SRC = ./ex00/ft_ft.c
EX00_OBJ = $(EX00_SRC:.c=.o)

EX01_SRC = ./ex01/ft_ultimate_ft.c
EX01_OBJ = $(EX01_SRC:.c=.o)

ALL_OBJ = $(TEST_OBJ) $(EX00_OBJ) $(EX01_OBJ)
ALL_BINS = $(TEST)

all: $(TEST)

$(TEST): $(ALL_OBJ)
	$(CXX) $(LXXFLAGS) -o $(TEST) $(ALL_OBJ) $(GTEST)
	./$(TEST)

$(TEST_OBJ): $(TEST_SRC)
	$(CXX) $(CXXFLAGS) -o $(TEST_OBJ) $(TEST_SRC)

%.o: %.c
	$(CC) $(CFLAGS) $? -o $@

clean:
	rm -f $(ALL_OBJ)

fclean: clean
	rm -f $(ALL_BINS)

re: fclean all

.PHONY: all clean fclean re
