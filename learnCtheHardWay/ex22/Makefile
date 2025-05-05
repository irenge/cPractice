# Exercise 2: Using Makefiles to Build
# A makefile to build the other exercises.
#
# I'm trying to keep this reasonably portable. I've kicked the tires on:
# - Gentoo Linux 
#   - GNU Make 4.4.1
# Never read SHELL from the environment
# (http://www.gnu.org/software/make/manual/html_node/Makefile-Basics.html).
SHELL := /bin/sh
CC=cc
CFLAGS := -Wall -g -DNDEBUG
ex22_main: ex22.o ex22_main.c
	$(CC) ex22_main.c ex22.o -o ex22_main
ex22.o: ex22.c dbg.h
	$(CC) -c ex22.c -o ex22.o

