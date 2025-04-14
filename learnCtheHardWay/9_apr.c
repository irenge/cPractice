#include <stdio.h>
#define MAXLINE 100
int getlines(char s[], int lim) 
{
	int c,i;
	i=0;
	while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}
int atoi(char s[]) {
	double atof( char s[]);
	return (int) atof(s);
}

int main()
{
	double sum, atof(char[]);
	char line[MAXLINE];
	int getlines(char line[], int max);

	sum = 0;
	int sumi = 0;
	double sume = 0;
	while(getlines(line, MAXLINE) > 0) {
		printf("\t%g\n", sum += atof(line));
		printf("\t%d\n", sumi += atoi(line));
		printf("\t%e\n", sume += atof(line)); // scientific notation  Exercise 4.2

	}

	return 0;
}

