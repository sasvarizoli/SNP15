# Simple Makefile. Based on built-in rules.

CFLAGS+=-Wall -O0 -g3 -pthread -std=gnu99
LDLIBS=-lncurses
CXXFLAGS=${CFLAGS}
all: pong

pong: pong.c
	gcc $(CFLAGS) pong.c -o pong $(LDLIBS)
