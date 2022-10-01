NAME		= ex01

SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS		= ${SRCS:.cpp=.o}

CPPFLAGS	= -Wall -Werror -Wextra -std=c++98 #-fsanitize=address

RM			= rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
	c++ $(CPPGLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all