NAME			= ex03

SRCS			= main.cpp ICharacter.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp \
				IMateriaSource.cpp MateriaSource.cpp

CXX				= c++

INCLUDES		= AMateria.hpp ICharacter.hpp Ice.hpp Cure.hpp Character.hpp \
				IMateriaSource.hpp MateriaSource.hpp

OBJS			= $(SRCS:%.cpp=%.o)

# DPDNCS			= $(SRCS:%.cpp=%.d)

CXXFLAGS			= -Wall -Werror -Wextra -std=c++98 -g3 # -fsanitize=address -fsanitize=undefined -fsanitize=leak

RM 				= rm -f 

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all
