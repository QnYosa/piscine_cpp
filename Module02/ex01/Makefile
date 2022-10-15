NAME			= ex01

SRCS			= main.cpp Fixed.cpp

OBJS			= $(SRCS:.cpp=.o)

CPPFLAGS		= -Wall -Werror -Wextra -std=c++98 -g # -fsanitize=address

CXX				= c++

RM				= rm -f 

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all