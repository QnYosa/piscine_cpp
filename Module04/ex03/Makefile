NAME			= ex02

SRCS			= main.cpp AMateria.cpp ICharacter.cpp Ice.cpp Cure.cpp Character.cpp\
				Character.cpp

INCLUDES		= AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp 

OBJS			= $(SRCS:%.cpp=%.o)

# DPDNCS			= $(SRCS:%.cpp=%.d)

FLAGS			= -Wall -Werror -Wextra -std=c++98 

RM 				= rm -f 

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -$(NAME)

re: fclean all

.PHONY: clean fclean re all