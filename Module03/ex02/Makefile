NAME		= ex02

SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS		= ${SRCS:.cpp=.o}

INCLUDES	= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

CPPFLAGS	= -Wall -Werror -Wextra -std=c++98 #-fsanitize=address

RM			= rm -f

all:	$(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
