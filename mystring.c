#include <stdio.h>
#include <stdlib.h>

int mystrlen(char* s) {
	char* x = s;
	int i=0;
	while (*s) {
		i++;
		s++;
	}
	s=x;
	return i;
}

char * mystrcpy(char *s1, char *s2) {
	char* s3 = s1;
	while (*s2) 
		{
		*s1=*s2;
		s1++;
		s2++;
		}
	*(s1+1)='\0';
	s1=s3;
	return s3;
}


	
char * mystrncat(char *s1, char *s2, int size) {
	char* s3=s1;
	int i;
	for (i=0; i < size; i++) {
		*s1=*s2;
		s1++;
		s2++;
	}
	s1=s3;
	return s3;
}


char * mystrchr(char * s, int c) {
	char* x;
	while (*s) {
		if ((*s) == (char) c)  {
			x = s;
			return x; 
			} 
	s++;
	}
	if (c == '\0') {
		x=s;
		return x;
	}
	else
		return '\0';
}


int mystrcmp(char *s1, char *s2) {
	char *p1=s1;
	char *p2=s2;
	while ((*p1 == *p2) && (*p1 != '\0' || *p2 != '\0')) {
		p1++;
		p2++;
	}
	if (*p1 ==*p2)
		return 0;
	if (*p1 < *p2)
		return (*p1 - *p2);
	if (*p1 > *p2)
		return (*p1 - *p2);
}

