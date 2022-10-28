NAME			= ex02

SRCS			= main.cpp Base.cpp A.cpp B.cpp C.cpp

INCLUDES		= Base.hpp A.hpp B.hpp C.hpp

OBJS			= $(SRCS:%.cpp=%.o)

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

.PHONY: re all clean fclean