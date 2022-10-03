NAME = ex01

SRCS = main.cpp Contacts.cpp Phonebook.cpp

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

OBJS = ${SRCS:.cpp=.o}

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) *.o
fclean: clean
	$(RM) $(NAME)

re: fclean all