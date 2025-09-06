CXX = c++
CXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = zombieHorde
SRCS = main.cpp Zombie.cpp zombieHorde.cpp
OBJS = ${SRCS:.cpp=.o}

${NAME}: ${OBJS}
	${CXX} ${CXFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean: 
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re