NAME		= ex03

SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJS		= ${SRCS:.cpp=.o}

CPPFLAGS	= -Wall -Werror -Wextra -std=c++98 -fsanitize=address

RM 			= rm -f

all:	$(NAME)

$(NAME): $(OBJS) 
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM)*.o

fclean: clean
	$(RM) $(NAME)

re: fclean all