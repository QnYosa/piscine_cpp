NAME		= ex01

SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS		= ${SRCS:.cpp=.o}

CPPFLAGS	= -Wall -Werror -Wextra -std=c++98 -g3

RM			= rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
	c++ $(CPPGLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all