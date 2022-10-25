NAME			= ex01

SRCS			= main.cpp

INCLUDES		= Data.hpp

OBJS			= $(SRCS:%.cpp=%.o)

CXX				= c++

CPPFLAGS		= -Wall -Werror -Wextra -g3 -std=c++98

RM 				= rm -f

all:	$(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re all clean fclean 
