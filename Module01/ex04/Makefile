NAME			= ex04

SRCS			= main.cpp

OBJS			= $(SRCS:%.cpp=%.o)

CPPFLAGS		= -Wall -Werror -Wextra -std=c++98 

RM				= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
	

