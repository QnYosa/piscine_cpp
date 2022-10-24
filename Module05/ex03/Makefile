NAME			= ex03

SRCS			= main.cpp Bureaucrat.cpp Form.cpp Exceptions.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJS			= $(SRCS:%.cpp=%.o)

INCLUDES		= Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

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

.PHONY: all re clean fclean