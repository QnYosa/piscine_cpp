NAME			= ex00

SRCS			= main.cpp Exceptions.cpp Bureaucrat.cpp

INCLUDES		= Bureaucrat.hpp

OBJS			= $(SRCS:%.cpp=%.o)

CXX				= c++

CPPFLAGS		= -Wall -Werror -Wextra -std=c++98 #-fsanitize=address

RM				= rm -f

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 