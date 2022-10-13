NAME			= ex03

SRCS			= main.cpp ICharacter.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp \
				MateriaSource.cpp


INCLUDES		= AMateria.hpp ICharacter.hpp Ice.hpp Cure.hpp Character.hpp \
				MateriaSource.hpp

OBJS			= $(SRCS:%.cpp=%.o)

# DPDNCS			= $(SRCS:%.cpp=%.d)

FLAGS			= -Wall -Werror -Wextra -std=c++98 -g

RM 				= rm -f 

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all