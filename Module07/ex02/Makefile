NAME			= ex02

SRCS			= main.cpp

OBJS			= $(SRCS:%.cpp=%.o)

INCLUDES		= Array.hpp Array.tpp

CXX				= c++

CPPFLAGS		= -Wall -Werror -Wextra -std=c++98

RM				= rm -f

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re all fclean clean