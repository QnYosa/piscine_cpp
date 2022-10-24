NAME		= ex01

SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS		= ${SRCS:.cpp=.o}

INCLUDES	= ClapTrap.hpp ScavTrap.hpp

CPPFLAGS	= -Wall -Werror -Wextra -std=c++98 -Wshadow #-g3

RM			= rm -f

all:		$(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
