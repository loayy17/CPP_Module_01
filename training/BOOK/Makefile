CXX = c++ 
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Book.cpp
OBJS = ${SRCS:.cpp=.o}
NAME = book

${NAME} : ${OBJS}
		${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}
all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}
re: fclean all

.PHONY: re fclean clean all