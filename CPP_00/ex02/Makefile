
# $< "include one prerequisite"
# $@ "include target"
# $^ "include the full list of prerequisites)"

SRCS = tests.cpp Account.cpp 

OBJS = ${SRCS:.cpp=.o}

CXX = g++

CXXFLAGS = -Werror -Wall -Wextra -g3 -std=c++98

NAME = tests
	
all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	
fclean: clean
	rm -rf $(NAME)
	
re:	fclean all

.PHONY:	all clean fclean re
