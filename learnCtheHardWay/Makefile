# Exercise 2: Using Makefiles to Build
# A makefile to build the other exercises.
#
# I'm trying to keep this reasonably portable. I've kicked the tires on:
# - Gentoo Linux 
#   - GNU Make 4.4.1
# Never read SHELL from the environment
# (http://www.gnu.org/software/make/manual/html_node/Makefile-Basics.html).
SHELL := /bin/sh

CFLAGS := -Wall -g -lm

exercises := 1 3 7 8 9 10 11 12 13 14 15 16 17
exercises := $(exercises:%=ex%)

.PHONY: all clean
all: $(exercises)
clean:
	rm -fR $(exercises) $(exercises:%=%.dSYM)
