NAME			 = ex00

SRCS			 = main.cpp ClapTrap.cpp

OBJS			 = ${SRCS:.cpp=.o}

CPPFLAGS		 = -Wall -Werror -Wextra -std=c++98 -g  -Wshadow 

RM 				= rm -f

all:			$(NAME)

$(NAME): $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
