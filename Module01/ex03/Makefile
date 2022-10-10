NAME			= ex03

SRCS			= main.cpp \
				HumanA.cpp HumanB.cpp \
				Weapon.cpp 

OBJS			= ${SRCS:.cpp=.o}

CPPFLAGS		= -Wall -Werror -Wextra -std=c++98 

RM				= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all 	