NAME		 = ex00

SRCS 		= main.cpp newZombie.cpp randomChump.cpp \
				Zombie.cpp

OBJS 		= ${SRCS:%.cpp=%.o}

CPPFLAGS	= -Wall -Werror -Wextra -std=c++98

RM			= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean