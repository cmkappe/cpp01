NAME        = sed_is_for_losers
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98

SRC         = main.cpp
OBJ         = $(SRC:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
