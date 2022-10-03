NAME			= ex03

SRCS			= main.cpp \
				HumanA.cpp HumanB.cpp \
				Weapon.cpp 

OBJS			= ${SRCS:.cpp=.o}

CPPFLAGS		= -Wall -Werror -Wextra -std=c++98 -g3 -fsanitize=address

RM				= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all 	