/*
    Exercise 1: Dust Off That Compiler
    A small demonstration of a variety of C features.
*/

#include <stdio.h>
#include <stdlib.h>
/* This is a comment. */
int main(int argc, char *argv[])
{
    int distance = 100;

    // this is also a comment
    printf("You are %d miles away.\n", distance);

    // LCTHW extra credit
    printf("argc = %d\n", argc);
    int num;
    for (int j = 0 ; j < argc; j++) {
	     num = atoi(argv[j]);

	     for (int i = 0; i < num; i++){
		    // num = atoi(argv[i]);
		     printf("%d something more complex than \"%s\"\n", i, "hello world");
		     printf("\"%s\" was written by %s.\n", "Learn C the Hard Way", "Zed Shaw");
    }
}

    return 0;
}
