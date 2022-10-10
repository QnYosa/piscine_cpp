NAME			= ex02

SRCS			= main.cpp AMateria.cpp ICharacter.cpp

OBJS			= $(SRCS:%.cpp=%.o)

# DPDNCS			= $(SRCS:%.cpp=%.d)

FLAGS			= -Wall -Werror -Wextra -std=c++98 

RM 				= rm -f 

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -$(NAME)

re: fclean all

.PHONY: clean fclean re all