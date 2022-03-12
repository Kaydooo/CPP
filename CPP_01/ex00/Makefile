
# $< "include one prerequisite"
# $@ "include target"
# $^ "include the full list of prerequisites)"

SRCS = Zombie.cpp main.cpp

OBJS = ${SRCS:.cpp=.o}

CC = g++

CXXFLAGS = -Werror -Wall -Wextra -std=c++98

NAME = BraiiiiiiinnnzzzZ
	
all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
	
re:	fclean all

.PHONY:	all clean fclean re
