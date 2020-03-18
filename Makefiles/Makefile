CXX = g++
CXXFLAGS = -std=c++0x -Wall -pedantic-errors -g

SRCS =  main.cpp Dog.cpp Animal.cpp
OBJS = ${SRCS:.cpp=.o}
HEADERS = Dog.h Animal.h

MAIN = farm

all: ${MAIN}
	@echo   Program successfully compiled

${MAIN}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${MAIN}

.cpp.o:
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	${RM} ${PROGS} ${OBJS} *.o *~.
