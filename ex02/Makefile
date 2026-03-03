NAME        = hiThisIsBrain
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -O2 -std=c++17 -g #-fsanitize=address

SRC_DIR     = .
OBJ_DIR     = obj

SRC         = main.cpp
OBJ         = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
