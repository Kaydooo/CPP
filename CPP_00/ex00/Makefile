
# $< "include one prerequisite"
# $@ "include target"
# $^ "include the full list of prerequisites)"

SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

CC = g++

FLAGS = -Werror -Wall -Wextra -std=c++98

NAME = megaphone
	
all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
	
re:	fclean all

.PHONY:	all clean fclean re
