CXX = c++
CXFLAGS = -Wall -Wexctra -Werror -std=c++98
SRCS = main.cpp Harl.cpp
OBJS = ${SRCS:.cpp=.o}
NAME = harlFilter

${NAME}: ${OBJS}
		${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}

all: ${NAME}

clean: 
	rm -rf ${OBJS}

fclean: clean
		rm -rf ${NAME}

re:fclean all

.PHONY:re fclean clean all