NAME = FragTrap
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ = $(SRC:.cpp=.o)
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++98

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
