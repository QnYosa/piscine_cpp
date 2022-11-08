NAME			= ex02

SRCS			= main.cpp

INCLUDES		= MutantStack.hpp

OBJS			= $(SRCS:.%cpp=%.o)

CXX				= c++

CPPFLAGS		= -Wall -Werror -Wextra -std=c++98

RM				= rm -f

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: fclean 
	$(RM) $(NAME)

re: fclean all

.PHONY: re all clean fclean