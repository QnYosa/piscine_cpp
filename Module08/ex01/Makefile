NAME			= ex01

SRCS			= main.cpp Span.cpp

OBJS			= $(SRCS:%.cpp=%.o)

INCLUDES		= Span.hpp

CXX				= c++

CPPFLAGS		= -Wall -Werror -Wextra -std=c++98 -g

RM				= rm -f

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: re clean fclean all