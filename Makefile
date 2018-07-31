CC = g++
FLAGS = -std=c++11 -Wall
COMPILE = ${CC} ${FLAGS}

build: fibo.cpp fibo.hpp
	${COMPILE} fibo.cpp -o fibo

debug: fibo.cpp fibo.hpp
	${COMPILE} -g fibo.cpp -o fibo

save: build
	./fibo -A > fibo.txt

clean: 
	rm -f fibo fibo.txt