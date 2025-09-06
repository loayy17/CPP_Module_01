CXX = c++ 
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Car.cpp
OBJS = ${SRCS:.cpp=.o}
NAME = Car

${NAME} : ${OBJS}
		${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}
all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}
re: fclean all

.PHONY: re fclean clean all