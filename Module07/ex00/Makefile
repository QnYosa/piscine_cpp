NAME 		= ex00

SRCS		= main.cpp

OBJS		= $(SRCS:%.cpp=%.o)

INCLUDES	= whatever.hpp

CXX			= c++

CPPFLAGS	= -Wall -Werror -Wextra -std=c++98

RM 			= rm -f

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean 
	$(RM) $(NAME)

re: fclean all

.PHONY: re all clean fclean 